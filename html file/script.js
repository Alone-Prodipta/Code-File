const left= document.querySelector(".arrow-left");
const right= document.querySelector(".arrow-right");
const slider= document.querySelector(".slider");
const images= document.querySelectorAll(".image");
let slideNumber= 1;
const len= images.length;
const nextSlide=()=>
{
    slider.style.transform=`translateX(-${slideNumber*400}px)`;
    slideNumber++;
}
const getFirstSlide=()=>
{
    slider.style.transform=`translateX(0px)`;
    slideNumber= 1;
}
const prevSlide=()=>
{
    slideNumber--;
    slider.style.transform=`translateX(-${(slideNumber-1)*400}px)`;
}
const getLastSlide=()=>
{
    slider.style.transform=`translateX(-${(len-1)*400}px)`;
    slideNumber= len;
}
right.addEventListener("click",()=>
{
    if(slideNumber<len)
    {
       nextSlide();
    }
    else
    {
        getFirstSlide();
    };
});
left.addEventListener("click",()=>
{
    if(slideNumber>1)
    {
       prevSlide();
    }
    else
    {
        getLastSlide();
    };
});