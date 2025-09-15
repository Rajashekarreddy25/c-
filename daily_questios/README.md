###  🔹 Page and Frame

Page → A fixed-size block of a process’s logical memory.

Frame → A fixed-size block of physical memory (RAM).

Size of a page = size of a frame (for easy mapping).

👉 Example:
If page size = 1 KB, then both logical memory and physical memory are divided into 1 KB blocks.

Process memory: Page 0, Page 1, Page 2 …

RAM memory: Frame 0, Frame 1, Frame 2 …

When a program runs, its pages are loaded into available frames.

### 🔹 Paging

A memory management technique.

It eliminates external fragmentation.

Logical memory is divided into pages and physical memory into frames.

OS maintains a page table to map pages → frames.

👉 Example:
Process page 0 → Frame 5
Process page 1 → Frame 2
Process page 2 → Frame 9

So logical memory is scattered across RAM, but the OS keeps track.

🔹 Segmentation

Another memory management technique.

Memory is divided into segments of variable sizes (not fixed).

Segments are based on logical divisions of a program like:

Code segment

Data segment

Stack segment

Heap segment

👉 Difference from Paging:

Paging: fixed-size blocks (pages/frames).

Segmentation: variable-size blocks (segments).

### 🔹 Dirty Bit

A status bit in the page table entry.

Set (1) → if the page in RAM has been modified (written to) after being loaded from disk.

Not set (0) → if the page has not changed since it was loaded.

✅ Usage:

When a page is removed (swapped out) from RAM:

If dirty bit = 1 → page must be written back to disk (to save changes).

If dirty bit = 0 → page can be simply discarded (disk copy is already updated).

👉 Helps reduce unnecessary disk writes → improves efficiency.
