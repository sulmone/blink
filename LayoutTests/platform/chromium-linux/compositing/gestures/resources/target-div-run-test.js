function runTest() {
    var clientRect = document.getElementById('targetDiv').getBoundingClientRect();
    x = (clientRect.left + clientRect.right) / 2;
    y = (clientRect.top +  clientRect.bottom) / 2;
    if (window.testRunner) {
        testRunner.dumpAsText(true);
        testRunner.waitUntilDone();
    }

    if (window.eventSender) {
        eventSender.gestureTapDown(x, y);
        window.setTimeout(function() { window.testRunner.notifyDone(); }, 0);
    } else {
        debug("This test requires DumpRenderTree.");
    }
}
