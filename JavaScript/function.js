const track = document.querySelector('.slide-track');
const btnNext = document.querySelector('#forward');
const btnPrev = document.querySelector('#backward');

// Move the first element to the end of the container
const shiftNext = () => {
    const items = document.querySelectorAll('.slide-card');
    track.appendChild(items[0]);
};

// Move the last element to the beginning of the container
const shiftPrev = () => {
    const items = document.querySelectorAll('.slide-card');
    track.prepend(items[items.length - 1]);
};

btnNext.addEventListener('click', shiftNext);
btnPrev.addEventListener('click', shiftPrev);