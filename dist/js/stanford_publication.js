!function(e){var o={};function a(t){if(o[t])return o[t].exports;var n=o[t]={i:t,l:!1,exports:{}};return e[t].call(n.exports,n,n.exports,a),n.l=!0,n.exports}a.m=e,a.c=o,a.d=function(t,n,e){a.o(t,n)||Object.defineProperty(t,n,{enumerable:!0,get:e})},a.r=function(t){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})},a.t=function(n,t){if(1&t&&(n=a(n)),8&t)return n;if(4&t&&"object"==typeof n&&n&&n.__esModule)return n;var e=Object.create(null);if(a.r(e),Object.defineProperty(e,"default",{enumerable:!0,value:n}),2&t&&"string"!=typeof n)for(var o in n)a.d(e,o,function(t){return n[t]}.bind(null,o));return e},a.n=function(t){var n=t&&t.__esModule?function(){return t.default}:function(){return t};return a.d(n,"a",n),n},a.o=function(t,n){return Object.prototype.hasOwnProperty.call(t,n)},a.p="",a(a.s=1)}([function(t,n){window.Drupal.behaviors.stanford_publication={attach:function(t,n){!function(e){e("#system-menu-blockstanford-publication-topics-menu").addClass("publication-topics__collapsable-menu");var t=window.matchMedia("(max-width: 991px)");function n(t){var n;t.matches?(n=e(".publication-topics__collapsable-menu").click(function(){return n.toggleClass("show")}),console.log(n),e("#system-menu-blockstanford-publication-topics-menu").contents().unwrap().wrap('<button class="publication-topics__collapsable-menu"/>'),e("h2.publication-topics__collapsable-menu").contents().unwrap().wrap('<button class="publication-topics__collapsable-menu"/>')):t.matches?(e("button.publication-topics__collapsable-menu").contents().unwrap().wrap('<h2 class="publication-topics__collapsable-menu"/>'),e(".menu").closest(".show").removeClass("show")):e("button.publication-topics__collapsable-menu").contents().unwrap().wrap('<h2 class="publication-topics__collapsable-menu"/>')}t.addListener(n),n(t)}(jQuery)}}},function(t,n,e){"use strict";e.r(n);n=e(0)}]);
//# sourceMappingURL=stanford_publication.js.map