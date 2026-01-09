const count= document.querySelectorAll(".title");
speed= 90;
count.forEach(child=>
{
    function interval()
    {
        const target= Number(child.getAttribute("data-target"));
        const counter= Number(child.innerText);
        const increment= target/speed;
        if(counter<target)
        {
            child.innerText=increment+counter;
            child.innerText=Math.floor(child.innerText);
            setTimeout(interval,1);
        }
        else
        {
            child.innerText=target;
        }
    }
    interval();
});
