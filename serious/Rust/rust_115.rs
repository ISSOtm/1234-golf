extern { fn putchar(x: usize); }

fn main() {
    let x = true as usize;
    let y = x + x + x;
    let z = (y << x + y) + x;
    for c in z..=z + y {
        unsafe { putchar(c); }
    }
}
