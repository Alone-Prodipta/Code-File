const track = document.querySelector('.slide-track');
const btnNext = document.querySelector('#forward');
const btnPrev = document.querySelector('#backward');


const shiftNext = () => {
    const items = document.querySelectorAll('.slide-card');
    track.appendChild(items[0]);
};


const shiftPrev = () => {
    const items = document.querySelectorAll('.slide-card');
    track.prepend(items[items.length - 1]);
};

btnNext.addEventListener('click', shiftNext);
btnPrev.addEventListener('click', shiftPrev);