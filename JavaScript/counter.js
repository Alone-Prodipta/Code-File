const display = document.getElementById("count_label");
let number = 0;
const increment = document.getElementById("plus");
const reset = document.getElementById("reset");
const decrement = document.getElementById("minus");
const screen = document.getElementById("screen");

function updateUI() 
{
    // update displayed number
    display.textContent = number;

    // check zero first
    if (number === 0)
    {
        display.style.color = "white";
        screen.textContent = "It is zero";
        screen.style.color = "white";
        return;
    }

    // positive numbers
    if (number > 0) 
    {
        if (number % 2 === 0) 
        {
            display.style.color = "navy";
            screen.textContent = "It is an even number";
            screen.style.color = "navy";
        } 
        else
        {
            display.style.color = "maroon";
            screen.textContent = "It is an odd number";
            screen.style.color = "maroon";
        }
        return;
    }

    // negative numbers
    if (number < 0) 
    {
        if (Math.abs(number) % 2 === 0)
     {
            display.style.color = "navy";
            screen.textContent = "It is a negative even number";
            screen.style.color = "navy";
        }
        else
        {
            display.style.color = "maroon";
            screen.textContent = "It is a negative odd number";
            screen.style.color = "maroon";
        }
    }
}

increment.action = function()
{
    number++;
    updateUI();
}
reset.action = function()
{
    number = 0;
    updateUI();
}
decrement.action = function() 
{
    number--;
    updateUI();
}
