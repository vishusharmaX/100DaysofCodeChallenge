<h2><a href="https://www.geeksforgeeks.org/problems/minimum-changes-to-make-all-substrings-distinct4722/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab">Minimum changes to make all substrings distinct</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>s&nbsp;</strong>consisting only lower case alphabets, find the <strong>minimum number of changes</strong> required to it so that all substrings of the string become distinct.</span><br>
<span style="font-size:18px"><strong>Note:</strong> length of the string is at most 26.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>S = "aab"
<strong>Output:</strong> 1
<strong>Explanation</strong>: If we change one instance 
of 'a' to any character from 'c' to 'z', 
we get all distinct substrings.</span></pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: S = "ab"
<strong>Output:</strong> 0
<strong>Explanation</strong>: As no change is required
hence 0.</span><span style="font-size:18px">
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minChange()</strong>&nbsp;which takes the string <strong>S </strong>as inputs and returns the answer.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(|S|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(26)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ |S| ≤ 26</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;