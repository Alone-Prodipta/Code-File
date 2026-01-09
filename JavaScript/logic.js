const select= document.querySelectorAll(".box");
//console.log(select);
const body= document.querySelector("body");
select.forEach(function(box)
{
    //console.log(select);
    box.addEventListener("click",function(e)
    {
        //console.log(e);
        //console.log(e.target);
        if(e.target.id == "white")
        {
           body.style.backgroundColor="white";
        }
         if(e.target.id == "black")
        {
            body.style.backgroundColor="black";            
        }
        if(e.target.id == "pink")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id == "orange")
        {
            body.style.backgroundColor= e.target.id;
        }
        if(e.target.id == "red")
        {
            body.style.backgroundColor= e.target.id;
        }
         if(e.target.id == "orangered")
        {
            body.style.backgroundColor= e.target.id;
        }
         if(e.target.id == "blue")
        {
            body.style.backgroundColor= e.target.id;
        }
         if(e.target.id == "green")
        {
            body.style.backgroundColor= e.target.id;
        }

    });
});