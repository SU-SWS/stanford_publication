!function(n){var r={};function o(t){if(r[t])return r[t].exports;var e=r[t]={i:t,l:!1,exports:{}};return n[t].call(e.exports,e,e.exports,o),e.l=!0,e.exports}o.m=n,o.c=r,o.d=function(t,e,n){o.o(t,e)||Object.defineProperty(t,e,{enumerable:!0,get:n})},o.r=function(t){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})},o.t=function(e,t){if(1&t&&(e=o(e)),8&t)return e;if(4&t&&"object"==typeof e&&e&&e.__esModule)return e;var n=Object.create(null);if(o.r(n),Object.defineProperty(n,"default",{enumerable:!0,value:e}),2&t&&"string"!=typeof e)for(var r in e)o.d(n,r,function(t){return e[t]}.bind(null,r));return n},o.n=function(t){var e=t&&t.__esModule?function(){return t.default}:function(){return t};return o.d(e,"a",e),e},o.o=function(t,e){return Object.prototype.hasOwnProperty.call(t,e)},o.p="",o(o.s=0)}([function(t,e){window.Drupal.behaviors.stanford_publication={attach:function(t,e){function n(t){var e;t.matches?(o.find("h2").unwrap("button").wrap(r("<button/>")),(e=o.find("button")).attr("aria-expanded",!1),e.click(function(){o.toggleClass("show"),e.attr("aria-expanded",!1),o.hasClass("show")&&e.attr("aria-expanded",!0)})):o.find("h2").unwrap("button").removeClass("show")}var r,o;r=jQuery,o=r(".stanford-publication-topics",t),t=window.matchMedia("(max-width: 1200px)"),0<o.length&&(t.addListener(n),n(t))}}}]);
//# sourceMappingURL=stanford_publication.behavior.js.map