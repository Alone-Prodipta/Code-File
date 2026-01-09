let info= document.getElementById("text");
let op= document.querySelector(".output-area");
op.style.display="none";
function add()
{
    if(info.value=="")
    {
        alert("Enter a task");
        op.style.display="none";
    }
    else
    {
        let new_Element= document.createElement("ul");
        op.style.display="block";
        // create checkbox (hidden by default) and a span for the text
        let checkbox = document.createElement("input");
        checkbox.type = "checkbox";
     
        checkbox.className = "task-checkbox hidden";

        let textSpan = document.createElement("span");
        textSpan.textContent = info.value;

        // append checkbox and text to the new element
        new_Element.appendChild(checkbox);
        new_Element.appendChild(textSpan);
        new_Element.style.display = "flex";
        new_Element.style.alignItems = "center";

        op.appendChild(new_Element);
        info.value="";
        new_Element.style.backgroundColor="transparent";
        new_Element.style.color="white";
        new_Element.style.padding="10px";
        new_Element.style.fontFamily="David libre ,cursive";
        new_Element.style.borderRadius="10px";

        let option= document.querySelector("ul:last-child");
        option.addEventListener("click",(e)=>
        {
            option.style.backgroundColor="yellow";
            option.style.color="black";
            // create delete button if it doesn't already exist
            if(!option.querySelector(".delete-btn")) 
            {
                let deleteBtn = document.createElement("button");
                deleteBtn.className = "delete-btn";
                deleteBtn.textContent = "Delete";
                deleteBtn.style.marginLeft = "auto";
                deleteBtn.style.backgroundColor = "red";
                deleteBtn.style.fontFamily="Tagesschrift,serif";
                deleteBtn.style.color = "white";
                deleteBtn.style.border = "none";
                deleteBtn.style.padding = "6px 10px";
                deleteBtn.style.borderRadius = "5px";
                deleteBtn.style.cursor = "pointer";

                // append button to the task row
                option.appendChild(deleteBtn);

                // clicking the delete button removes the task
                deleteBtn.addEventListener("click", (ev) => 
                {
                    ev.stopPropagation();
                    option.style.backgroundColor="yellow";
                    option.style.color="black";
                    option.remove();
                });
            }
            else
            {
                // toggle visibility if button already exists
                const btn = option.querySelector(".delete-btn");
                btn.style.display = (btn.style.display === "none" ? "inline-block" : "none");
            }
        });
        option.addEventListener("mouseover",()=>
        {
            new_Element.style.backgroundColor="cyan";
            new_Element.style.color="black";
            // show checkbox on hover
            checkbox.classList.remove("hidden");
            
        });
        option.addEventListener("mouseout",()=>
        {
            new_Element.style.backgroundColor="transparent";
            new_Element.style.color="white";
            // hide checkbox when not checked
            if(!checkbox.checked) checkbox.classList.add("hidden");
        });
        
        // toggle completed style when checkbox changes
        checkbox.addEventListener("change", () => 
        {
            if(checkbox.checked)
            {
                checkbox.classList.remove("hidden"); // keep visible when checked
                textSpan.classList.add("completed");

                option.addEventListener("mouseout",()=>
                {
                    option.style.backgroundColor="yellow";
                    option.style.color="black";
                });
            }
            else
            {
                textSpan.classList.remove("completed");
            }
        });
        
    }
}