!function(n){var o={};function i(t){if(o[t])return o[t].exports;var e=o[t]={i:t,l:!1,exports:{}};return n[t].call(e.exports,e,e.exports,i),e.l=!0,e.exports}i.m=n,i.c=o,i.d=function(t,e,n){i.o(t,e)||Object.defineProperty(t,e,{enumerable:!0,get:n})},i.r=function(t){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})},i.t=function(e,t){if(1&t&&(e=i(e)),8&t)return e;if(4&t&&"object"==typeof e&&e&&e.__esModule)return e;var n=Object.create(null);if(i.r(n),Object.defineProperty(n,"default",{enumerable:!0,value:e}),2&t&&"string"!=typeof e)for(var o in e)i.d(n,o,function(t){return e[t]}.bind(null,o));return n},i.n=function(t){var e=t&&t.__esModule?function(){return t.default}:function(){return t};return i.d(e,"a",e),e},i.o=function(t,e){return Object.prototype.hasOwnProperty.call(t,e)},i.p="",i(i.s=0)}([function(t,e){window.Drupal.behaviors.stanford_publication={attach:function(i,t){!function(e){e("#system-menu-blockstanford-publication-topics-menu").addClass("publication-topics__collapsable-menu");var t=window.matchMedia("(max-width: 991px)"),n=e("#system-menu-blockstanford-publication-topics-menu").text();function o(t){t.matches?(e("#system-menu-blockstanford-publication-topics-menu").replaceWith('<button class="publication-topics__collapsable-menu">'+n+"</button>"),e("h2.publication-topics__collapsable-menu").replaceWith('<button class="publication-topics__collapsable-menu">'+n+"</button>"),e("button.publication-topics__collapsable-menu",i).click(function(){e(this).toggleClass("show"),"none"!==e(this).siblings(".menu").css("display")?e(this).attr("aria-expanded","true"):e(this).attr("aria-expanded","false")})):t.matches||e("button.publication-topics__collapsable-menu").replaceWith('<h2 class="publication-topics__collapsable-menu">'+n+"</h2>")}t.addListener(o),o(t)}(jQuery)}}}]);
//# sourceMappingURL=stanford_publication.behavior.js.map