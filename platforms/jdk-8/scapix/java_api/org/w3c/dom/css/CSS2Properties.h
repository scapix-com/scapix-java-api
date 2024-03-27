// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::css { class CSS2Properties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::css::CSS2Properties>
{
	static constexpr fixed_string class_name = "org/w3c/dom/css/CSS2Properties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::css::CSS2Properties : public jni::object_base<"org/w3c/dom/css/CSS2Properties",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getAzimuth() { return call_method<"getAzimuth", jni::ref<java::lang::String>>(); }
	void setAzimuth(jni::ref<java::lang::String> p1) { return call_method<"setAzimuth", void>(p1); }
	jni::ref<java::lang::String> getBackground() { return call_method<"getBackground", jni::ref<java::lang::String>>(); }
	void setBackground(jni::ref<java::lang::String> p1) { return call_method<"setBackground", void>(p1); }
	jni::ref<java::lang::String> getBackgroundAttachment() { return call_method<"getBackgroundAttachment", jni::ref<java::lang::String>>(); }
	void setBackgroundAttachment(jni::ref<java::lang::String> p1) { return call_method<"setBackgroundAttachment", void>(p1); }
	jni::ref<java::lang::String> getBackgroundColor() { return call_method<"getBackgroundColor", jni::ref<java::lang::String>>(); }
	void setBackgroundColor(jni::ref<java::lang::String> p1) { return call_method<"setBackgroundColor", void>(p1); }
	jni::ref<java::lang::String> getBackgroundImage() { return call_method<"getBackgroundImage", jni::ref<java::lang::String>>(); }
	void setBackgroundImage(jni::ref<java::lang::String> p1) { return call_method<"setBackgroundImage", void>(p1); }
	jni::ref<java::lang::String> getBackgroundPosition() { return call_method<"getBackgroundPosition", jni::ref<java::lang::String>>(); }
	void setBackgroundPosition(jni::ref<java::lang::String> p1) { return call_method<"setBackgroundPosition", void>(p1); }
	jni::ref<java::lang::String> getBackgroundRepeat() { return call_method<"getBackgroundRepeat", jni::ref<java::lang::String>>(); }
	void setBackgroundRepeat(jni::ref<java::lang::String> p1) { return call_method<"setBackgroundRepeat", void>(p1); }
	jni::ref<java::lang::String> getBorder() { return call_method<"getBorder", jni::ref<java::lang::String>>(); }
	void setBorder(jni::ref<java::lang::String> p1) { return call_method<"setBorder", void>(p1); }
	jni::ref<java::lang::String> getBorderCollapse() { return call_method<"getBorderCollapse", jni::ref<java::lang::String>>(); }
	void setBorderCollapse(jni::ref<java::lang::String> p1) { return call_method<"setBorderCollapse", void>(p1); }
	jni::ref<java::lang::String> getBorderColor() { return call_method<"getBorderColor", jni::ref<java::lang::String>>(); }
	void setBorderColor(jni::ref<java::lang::String> p1) { return call_method<"setBorderColor", void>(p1); }
	jni::ref<java::lang::String> getBorderSpacing() { return call_method<"getBorderSpacing", jni::ref<java::lang::String>>(); }
	void setBorderSpacing(jni::ref<java::lang::String> p1) { return call_method<"setBorderSpacing", void>(p1); }
	jni::ref<java::lang::String> getBorderStyle() { return call_method<"getBorderStyle", jni::ref<java::lang::String>>(); }
	void setBorderStyle(jni::ref<java::lang::String> p1) { return call_method<"setBorderStyle", void>(p1); }
	jni::ref<java::lang::String> getBorderTop() { return call_method<"getBorderTop", jni::ref<java::lang::String>>(); }
	void setBorderTop(jni::ref<java::lang::String> p1) { return call_method<"setBorderTop", void>(p1); }
	jni::ref<java::lang::String> getBorderRight() { return call_method<"getBorderRight", jni::ref<java::lang::String>>(); }
	void setBorderRight(jni::ref<java::lang::String> p1) { return call_method<"setBorderRight", void>(p1); }
	jni::ref<java::lang::String> getBorderBottom() { return call_method<"getBorderBottom", jni::ref<java::lang::String>>(); }
	void setBorderBottom(jni::ref<java::lang::String> p1) { return call_method<"setBorderBottom", void>(p1); }
	jni::ref<java::lang::String> getBorderLeft() { return call_method<"getBorderLeft", jni::ref<java::lang::String>>(); }
	void setBorderLeft(jni::ref<java::lang::String> p1) { return call_method<"setBorderLeft", void>(p1); }
	jni::ref<java::lang::String> getBorderTopColor() { return call_method<"getBorderTopColor", jni::ref<java::lang::String>>(); }
	void setBorderTopColor(jni::ref<java::lang::String> p1) { return call_method<"setBorderTopColor", void>(p1); }
	jni::ref<java::lang::String> getBorderRightColor() { return call_method<"getBorderRightColor", jni::ref<java::lang::String>>(); }
	void setBorderRightColor(jni::ref<java::lang::String> p1) { return call_method<"setBorderRightColor", void>(p1); }
	jni::ref<java::lang::String> getBorderBottomColor() { return call_method<"getBorderBottomColor", jni::ref<java::lang::String>>(); }
	void setBorderBottomColor(jni::ref<java::lang::String> p1) { return call_method<"setBorderBottomColor", void>(p1); }
	jni::ref<java::lang::String> getBorderLeftColor() { return call_method<"getBorderLeftColor", jni::ref<java::lang::String>>(); }
	void setBorderLeftColor(jni::ref<java::lang::String> p1) { return call_method<"setBorderLeftColor", void>(p1); }
	jni::ref<java::lang::String> getBorderTopStyle() { return call_method<"getBorderTopStyle", jni::ref<java::lang::String>>(); }
	void setBorderTopStyle(jni::ref<java::lang::String> p1) { return call_method<"setBorderTopStyle", void>(p1); }
	jni::ref<java::lang::String> getBorderRightStyle() { return call_method<"getBorderRightStyle", jni::ref<java::lang::String>>(); }
	void setBorderRightStyle(jni::ref<java::lang::String> p1) { return call_method<"setBorderRightStyle", void>(p1); }
	jni::ref<java::lang::String> getBorderBottomStyle() { return call_method<"getBorderBottomStyle", jni::ref<java::lang::String>>(); }
	void setBorderBottomStyle(jni::ref<java::lang::String> p1) { return call_method<"setBorderBottomStyle", void>(p1); }
	jni::ref<java::lang::String> getBorderLeftStyle() { return call_method<"getBorderLeftStyle", jni::ref<java::lang::String>>(); }
	void setBorderLeftStyle(jni::ref<java::lang::String> p1) { return call_method<"setBorderLeftStyle", void>(p1); }
	jni::ref<java::lang::String> getBorderTopWidth() { return call_method<"getBorderTopWidth", jni::ref<java::lang::String>>(); }
	void setBorderTopWidth(jni::ref<java::lang::String> p1) { return call_method<"setBorderTopWidth", void>(p1); }
	jni::ref<java::lang::String> getBorderRightWidth() { return call_method<"getBorderRightWidth", jni::ref<java::lang::String>>(); }
	void setBorderRightWidth(jni::ref<java::lang::String> p1) { return call_method<"setBorderRightWidth", void>(p1); }
	jni::ref<java::lang::String> getBorderBottomWidth() { return call_method<"getBorderBottomWidth", jni::ref<java::lang::String>>(); }
	void setBorderBottomWidth(jni::ref<java::lang::String> p1) { return call_method<"setBorderBottomWidth", void>(p1); }
	jni::ref<java::lang::String> getBorderLeftWidth() { return call_method<"getBorderLeftWidth", jni::ref<java::lang::String>>(); }
	void setBorderLeftWidth(jni::ref<java::lang::String> p1) { return call_method<"setBorderLeftWidth", void>(p1); }
	jni::ref<java::lang::String> getBorderWidth() { return call_method<"getBorderWidth", jni::ref<java::lang::String>>(); }
	void setBorderWidth(jni::ref<java::lang::String> p1) { return call_method<"setBorderWidth", void>(p1); }
	jni::ref<java::lang::String> getBottom() { return call_method<"getBottom", jni::ref<java::lang::String>>(); }
	void setBottom(jni::ref<java::lang::String> p1) { return call_method<"setBottom", void>(p1); }
	jni::ref<java::lang::String> getCaptionSide() { return call_method<"getCaptionSide", jni::ref<java::lang::String>>(); }
	void setCaptionSide(jni::ref<java::lang::String> p1) { return call_method<"setCaptionSide", void>(p1); }
	jni::ref<java::lang::String> getClear() { return call_method<"getClear", jni::ref<java::lang::String>>(); }
	void setClear(jni::ref<java::lang::String> p1) { return call_method<"setClear", void>(p1); }
	jni::ref<java::lang::String> getClip() { return call_method<"getClip", jni::ref<java::lang::String>>(); }
	void setClip(jni::ref<java::lang::String> p1) { return call_method<"setClip", void>(p1); }
	jni::ref<java::lang::String> getColor() { return call_method<"getColor", jni::ref<java::lang::String>>(); }
	void setColor(jni::ref<java::lang::String> p1) { return call_method<"setColor", void>(p1); }
	jni::ref<java::lang::String> getContent() { return call_method<"getContent", jni::ref<java::lang::String>>(); }
	void setContent(jni::ref<java::lang::String> p1) { return call_method<"setContent", void>(p1); }
	jni::ref<java::lang::String> getCounterIncrement() { return call_method<"getCounterIncrement", jni::ref<java::lang::String>>(); }
	void setCounterIncrement(jni::ref<java::lang::String> p1) { return call_method<"setCounterIncrement", void>(p1); }
	jni::ref<java::lang::String> getCounterReset() { return call_method<"getCounterReset", jni::ref<java::lang::String>>(); }
	void setCounterReset(jni::ref<java::lang::String> p1) { return call_method<"setCounterReset", void>(p1); }
	jni::ref<java::lang::String> getCue() { return call_method<"getCue", jni::ref<java::lang::String>>(); }
	void setCue(jni::ref<java::lang::String> p1) { return call_method<"setCue", void>(p1); }
	jni::ref<java::lang::String> getCueAfter() { return call_method<"getCueAfter", jni::ref<java::lang::String>>(); }
	void setCueAfter(jni::ref<java::lang::String> p1) { return call_method<"setCueAfter", void>(p1); }
	jni::ref<java::lang::String> getCueBefore() { return call_method<"getCueBefore", jni::ref<java::lang::String>>(); }
	void setCueBefore(jni::ref<java::lang::String> p1) { return call_method<"setCueBefore", void>(p1); }
	jni::ref<java::lang::String> getCursor() { return call_method<"getCursor", jni::ref<java::lang::String>>(); }
	void setCursor(jni::ref<java::lang::String> p1) { return call_method<"setCursor", void>(p1); }
	jni::ref<java::lang::String> getDirection() { return call_method<"getDirection", jni::ref<java::lang::String>>(); }
	void setDirection(jni::ref<java::lang::String> p1) { return call_method<"setDirection", void>(p1); }
	jni::ref<java::lang::String> getDisplay() { return call_method<"getDisplay", jni::ref<java::lang::String>>(); }
	void setDisplay(jni::ref<java::lang::String> p1) { return call_method<"setDisplay", void>(p1); }
	jni::ref<java::lang::String> getElevation() { return call_method<"getElevation", jni::ref<java::lang::String>>(); }
	void setElevation(jni::ref<java::lang::String> p1) { return call_method<"setElevation", void>(p1); }
	jni::ref<java::lang::String> getEmptyCells() { return call_method<"getEmptyCells", jni::ref<java::lang::String>>(); }
	void setEmptyCells(jni::ref<java::lang::String> p1) { return call_method<"setEmptyCells", void>(p1); }
	jni::ref<java::lang::String> getCssFloat() { return call_method<"getCssFloat", jni::ref<java::lang::String>>(); }
	void setCssFloat(jni::ref<java::lang::String> p1) { return call_method<"setCssFloat", void>(p1); }
	jni::ref<java::lang::String> getFont() { return call_method<"getFont", jni::ref<java::lang::String>>(); }
	void setFont(jni::ref<java::lang::String> p1) { return call_method<"setFont", void>(p1); }
	jni::ref<java::lang::String> getFontFamily() { return call_method<"getFontFamily", jni::ref<java::lang::String>>(); }
	void setFontFamily(jni::ref<java::lang::String> p1) { return call_method<"setFontFamily", void>(p1); }
	jni::ref<java::lang::String> getFontSize() { return call_method<"getFontSize", jni::ref<java::lang::String>>(); }
	void setFontSize(jni::ref<java::lang::String> p1) { return call_method<"setFontSize", void>(p1); }
	jni::ref<java::lang::String> getFontSizeAdjust() { return call_method<"getFontSizeAdjust", jni::ref<java::lang::String>>(); }
	void setFontSizeAdjust(jni::ref<java::lang::String> p1) { return call_method<"setFontSizeAdjust", void>(p1); }
	jni::ref<java::lang::String> getFontStretch() { return call_method<"getFontStretch", jni::ref<java::lang::String>>(); }
	void setFontStretch(jni::ref<java::lang::String> p1) { return call_method<"setFontStretch", void>(p1); }
	jni::ref<java::lang::String> getFontStyle() { return call_method<"getFontStyle", jni::ref<java::lang::String>>(); }
	void setFontStyle(jni::ref<java::lang::String> p1) { return call_method<"setFontStyle", void>(p1); }
	jni::ref<java::lang::String> getFontVariant() { return call_method<"getFontVariant", jni::ref<java::lang::String>>(); }
	void setFontVariant(jni::ref<java::lang::String> p1) { return call_method<"setFontVariant", void>(p1); }
	jni::ref<java::lang::String> getFontWeight() { return call_method<"getFontWeight", jni::ref<java::lang::String>>(); }
	void setFontWeight(jni::ref<java::lang::String> p1) { return call_method<"setFontWeight", void>(p1); }
	jni::ref<java::lang::String> getHeight() { return call_method<"getHeight", jni::ref<java::lang::String>>(); }
	void setHeight(jni::ref<java::lang::String> p1) { return call_method<"setHeight", void>(p1); }
	jni::ref<java::lang::String> getLeft() { return call_method<"getLeft", jni::ref<java::lang::String>>(); }
	void setLeft(jni::ref<java::lang::String> p1) { return call_method<"setLeft", void>(p1); }
	jni::ref<java::lang::String> getLetterSpacing() { return call_method<"getLetterSpacing", jni::ref<java::lang::String>>(); }
	void setLetterSpacing(jni::ref<java::lang::String> p1) { return call_method<"setLetterSpacing", void>(p1); }
	jni::ref<java::lang::String> getLineHeight() { return call_method<"getLineHeight", jni::ref<java::lang::String>>(); }
	void setLineHeight(jni::ref<java::lang::String> p1) { return call_method<"setLineHeight", void>(p1); }
	jni::ref<java::lang::String> getListStyle() { return call_method<"getListStyle", jni::ref<java::lang::String>>(); }
	void setListStyle(jni::ref<java::lang::String> p1) { return call_method<"setListStyle", void>(p1); }
	jni::ref<java::lang::String> getListStyleImage() { return call_method<"getListStyleImage", jni::ref<java::lang::String>>(); }
	void setListStyleImage(jni::ref<java::lang::String> p1) { return call_method<"setListStyleImage", void>(p1); }
	jni::ref<java::lang::String> getListStylePosition() { return call_method<"getListStylePosition", jni::ref<java::lang::String>>(); }
	void setListStylePosition(jni::ref<java::lang::String> p1) { return call_method<"setListStylePosition", void>(p1); }
	jni::ref<java::lang::String> getListStyleType() { return call_method<"getListStyleType", jni::ref<java::lang::String>>(); }
	void setListStyleType(jni::ref<java::lang::String> p1) { return call_method<"setListStyleType", void>(p1); }
	jni::ref<java::lang::String> getMargin() { return call_method<"getMargin", jni::ref<java::lang::String>>(); }
	void setMargin(jni::ref<java::lang::String> p1) { return call_method<"setMargin", void>(p1); }
	jni::ref<java::lang::String> getMarginTop() { return call_method<"getMarginTop", jni::ref<java::lang::String>>(); }
	void setMarginTop(jni::ref<java::lang::String> p1) { return call_method<"setMarginTop", void>(p1); }
	jni::ref<java::lang::String> getMarginRight() { return call_method<"getMarginRight", jni::ref<java::lang::String>>(); }
	void setMarginRight(jni::ref<java::lang::String> p1) { return call_method<"setMarginRight", void>(p1); }
	jni::ref<java::lang::String> getMarginBottom() { return call_method<"getMarginBottom", jni::ref<java::lang::String>>(); }
	void setMarginBottom(jni::ref<java::lang::String> p1) { return call_method<"setMarginBottom", void>(p1); }
	jni::ref<java::lang::String> getMarginLeft() { return call_method<"getMarginLeft", jni::ref<java::lang::String>>(); }
	void setMarginLeft(jni::ref<java::lang::String> p1) { return call_method<"setMarginLeft", void>(p1); }
	jni::ref<java::lang::String> getMarkerOffset() { return call_method<"getMarkerOffset", jni::ref<java::lang::String>>(); }
	void setMarkerOffset(jni::ref<java::lang::String> p1) { return call_method<"setMarkerOffset", void>(p1); }
	jni::ref<java::lang::String> getMarks() { return call_method<"getMarks", jni::ref<java::lang::String>>(); }
	void setMarks(jni::ref<java::lang::String> p1) { return call_method<"setMarks", void>(p1); }
	jni::ref<java::lang::String> getMaxHeight() { return call_method<"getMaxHeight", jni::ref<java::lang::String>>(); }
	void setMaxHeight(jni::ref<java::lang::String> p1) { return call_method<"setMaxHeight", void>(p1); }
	jni::ref<java::lang::String> getMaxWidth() { return call_method<"getMaxWidth", jni::ref<java::lang::String>>(); }
	void setMaxWidth(jni::ref<java::lang::String> p1) { return call_method<"setMaxWidth", void>(p1); }
	jni::ref<java::lang::String> getMinHeight() { return call_method<"getMinHeight", jni::ref<java::lang::String>>(); }
	void setMinHeight(jni::ref<java::lang::String> p1) { return call_method<"setMinHeight", void>(p1); }
	jni::ref<java::lang::String> getMinWidth() { return call_method<"getMinWidth", jni::ref<java::lang::String>>(); }
	void setMinWidth(jni::ref<java::lang::String> p1) { return call_method<"setMinWidth", void>(p1); }
	jni::ref<java::lang::String> getOrphans() { return call_method<"getOrphans", jni::ref<java::lang::String>>(); }
	void setOrphans(jni::ref<java::lang::String> p1) { return call_method<"setOrphans", void>(p1); }
	jni::ref<java::lang::String> getOutline() { return call_method<"getOutline", jni::ref<java::lang::String>>(); }
	void setOutline(jni::ref<java::lang::String> p1) { return call_method<"setOutline", void>(p1); }
	jni::ref<java::lang::String> getOutlineColor() { return call_method<"getOutlineColor", jni::ref<java::lang::String>>(); }
	void setOutlineColor(jni::ref<java::lang::String> p1) { return call_method<"setOutlineColor", void>(p1); }
	jni::ref<java::lang::String> getOutlineStyle() { return call_method<"getOutlineStyle", jni::ref<java::lang::String>>(); }
	void setOutlineStyle(jni::ref<java::lang::String> p1) { return call_method<"setOutlineStyle", void>(p1); }
	jni::ref<java::lang::String> getOutlineWidth() { return call_method<"getOutlineWidth", jni::ref<java::lang::String>>(); }
	void setOutlineWidth(jni::ref<java::lang::String> p1) { return call_method<"setOutlineWidth", void>(p1); }
	jni::ref<java::lang::String> getOverflow() { return call_method<"getOverflow", jni::ref<java::lang::String>>(); }
	void setOverflow(jni::ref<java::lang::String> p1) { return call_method<"setOverflow", void>(p1); }
	jni::ref<java::lang::String> getPadding() { return call_method<"getPadding", jni::ref<java::lang::String>>(); }
	void setPadding(jni::ref<java::lang::String> p1) { return call_method<"setPadding", void>(p1); }
	jni::ref<java::lang::String> getPaddingTop() { return call_method<"getPaddingTop", jni::ref<java::lang::String>>(); }
	void setPaddingTop(jni::ref<java::lang::String> p1) { return call_method<"setPaddingTop", void>(p1); }
	jni::ref<java::lang::String> getPaddingRight() { return call_method<"getPaddingRight", jni::ref<java::lang::String>>(); }
	void setPaddingRight(jni::ref<java::lang::String> p1) { return call_method<"setPaddingRight", void>(p1); }
	jni::ref<java::lang::String> getPaddingBottom() { return call_method<"getPaddingBottom", jni::ref<java::lang::String>>(); }
	void setPaddingBottom(jni::ref<java::lang::String> p1) { return call_method<"setPaddingBottom", void>(p1); }
	jni::ref<java::lang::String> getPaddingLeft() { return call_method<"getPaddingLeft", jni::ref<java::lang::String>>(); }
	void setPaddingLeft(jni::ref<java::lang::String> p1) { return call_method<"setPaddingLeft", void>(p1); }
	jni::ref<java::lang::String> getPage() { return call_method<"getPage", jni::ref<java::lang::String>>(); }
	void setPage(jni::ref<java::lang::String> p1) { return call_method<"setPage", void>(p1); }
	jni::ref<java::lang::String> getPageBreakAfter() { return call_method<"getPageBreakAfter", jni::ref<java::lang::String>>(); }
	void setPageBreakAfter(jni::ref<java::lang::String> p1) { return call_method<"setPageBreakAfter", void>(p1); }
	jni::ref<java::lang::String> getPageBreakBefore() { return call_method<"getPageBreakBefore", jni::ref<java::lang::String>>(); }
	void setPageBreakBefore(jni::ref<java::lang::String> p1) { return call_method<"setPageBreakBefore", void>(p1); }
	jni::ref<java::lang::String> getPageBreakInside() { return call_method<"getPageBreakInside", jni::ref<java::lang::String>>(); }
	void setPageBreakInside(jni::ref<java::lang::String> p1) { return call_method<"setPageBreakInside", void>(p1); }
	jni::ref<java::lang::String> getPause() { return call_method<"getPause", jni::ref<java::lang::String>>(); }
	void setPause(jni::ref<java::lang::String> p1) { return call_method<"setPause", void>(p1); }
	jni::ref<java::lang::String> getPauseAfter() { return call_method<"getPauseAfter", jni::ref<java::lang::String>>(); }
	void setPauseAfter(jni::ref<java::lang::String> p1) { return call_method<"setPauseAfter", void>(p1); }
	jni::ref<java::lang::String> getPauseBefore() { return call_method<"getPauseBefore", jni::ref<java::lang::String>>(); }
	void setPauseBefore(jni::ref<java::lang::String> p1) { return call_method<"setPauseBefore", void>(p1); }
	jni::ref<java::lang::String> getPitch() { return call_method<"getPitch", jni::ref<java::lang::String>>(); }
	void setPitch(jni::ref<java::lang::String> p1) { return call_method<"setPitch", void>(p1); }
	jni::ref<java::lang::String> getPitchRange() { return call_method<"getPitchRange", jni::ref<java::lang::String>>(); }
	void setPitchRange(jni::ref<java::lang::String> p1) { return call_method<"setPitchRange", void>(p1); }
	jni::ref<java::lang::String> getPlayDuring() { return call_method<"getPlayDuring", jni::ref<java::lang::String>>(); }
	void setPlayDuring(jni::ref<java::lang::String> p1) { return call_method<"setPlayDuring", void>(p1); }
	jni::ref<java::lang::String> getPosition() { return call_method<"getPosition", jni::ref<java::lang::String>>(); }
	void setPosition(jni::ref<java::lang::String> p1) { return call_method<"setPosition", void>(p1); }
	jni::ref<java::lang::String> getQuotes() { return call_method<"getQuotes", jni::ref<java::lang::String>>(); }
	void setQuotes(jni::ref<java::lang::String> p1) { return call_method<"setQuotes", void>(p1); }
	jni::ref<java::lang::String> getRichness() { return call_method<"getRichness", jni::ref<java::lang::String>>(); }
	void setRichness(jni::ref<java::lang::String> p1) { return call_method<"setRichness", void>(p1); }
	jni::ref<java::lang::String> getRight() { return call_method<"getRight", jni::ref<java::lang::String>>(); }
	void setRight(jni::ref<java::lang::String> p1) { return call_method<"setRight", void>(p1); }
	jni::ref<java::lang::String> getSize() { return call_method<"getSize", jni::ref<java::lang::String>>(); }
	void setSize(jni::ref<java::lang::String> p1) { return call_method<"setSize", void>(p1); }
	jni::ref<java::lang::String> getSpeak() { return call_method<"getSpeak", jni::ref<java::lang::String>>(); }
	void setSpeak(jni::ref<java::lang::String> p1) { return call_method<"setSpeak", void>(p1); }
	jni::ref<java::lang::String> getSpeakHeader() { return call_method<"getSpeakHeader", jni::ref<java::lang::String>>(); }
	void setSpeakHeader(jni::ref<java::lang::String> p1) { return call_method<"setSpeakHeader", void>(p1); }
	jni::ref<java::lang::String> getSpeakNumeral() { return call_method<"getSpeakNumeral", jni::ref<java::lang::String>>(); }
	void setSpeakNumeral(jni::ref<java::lang::String> p1) { return call_method<"setSpeakNumeral", void>(p1); }
	jni::ref<java::lang::String> getSpeakPunctuation() { return call_method<"getSpeakPunctuation", jni::ref<java::lang::String>>(); }
	void setSpeakPunctuation(jni::ref<java::lang::String> p1) { return call_method<"setSpeakPunctuation", void>(p1); }
	jni::ref<java::lang::String> getSpeechRate() { return call_method<"getSpeechRate", jni::ref<java::lang::String>>(); }
	void setSpeechRate(jni::ref<java::lang::String> p1) { return call_method<"setSpeechRate", void>(p1); }
	jni::ref<java::lang::String> getStress() { return call_method<"getStress", jni::ref<java::lang::String>>(); }
	void setStress(jni::ref<java::lang::String> p1) { return call_method<"setStress", void>(p1); }
	jni::ref<java::lang::String> getTableLayout() { return call_method<"getTableLayout", jni::ref<java::lang::String>>(); }
	void setTableLayout(jni::ref<java::lang::String> p1) { return call_method<"setTableLayout", void>(p1); }
	jni::ref<java::lang::String> getTextAlign() { return call_method<"getTextAlign", jni::ref<java::lang::String>>(); }
	void setTextAlign(jni::ref<java::lang::String> p1) { return call_method<"setTextAlign", void>(p1); }
	jni::ref<java::lang::String> getTextDecoration() { return call_method<"getTextDecoration", jni::ref<java::lang::String>>(); }
	void setTextDecoration(jni::ref<java::lang::String> p1) { return call_method<"setTextDecoration", void>(p1); }
	jni::ref<java::lang::String> getTextIndent() { return call_method<"getTextIndent", jni::ref<java::lang::String>>(); }
	void setTextIndent(jni::ref<java::lang::String> p1) { return call_method<"setTextIndent", void>(p1); }
	jni::ref<java::lang::String> getTextShadow() { return call_method<"getTextShadow", jni::ref<java::lang::String>>(); }
	void setTextShadow(jni::ref<java::lang::String> p1) { return call_method<"setTextShadow", void>(p1); }
	jni::ref<java::lang::String> getTextTransform() { return call_method<"getTextTransform", jni::ref<java::lang::String>>(); }
	void setTextTransform(jni::ref<java::lang::String> p1) { return call_method<"setTextTransform", void>(p1); }
	jni::ref<java::lang::String> getTop() { return call_method<"getTop", jni::ref<java::lang::String>>(); }
	void setTop(jni::ref<java::lang::String> p1) { return call_method<"setTop", void>(p1); }
	jni::ref<java::lang::String> getUnicodeBidi() { return call_method<"getUnicodeBidi", jni::ref<java::lang::String>>(); }
	void setUnicodeBidi(jni::ref<java::lang::String> p1) { return call_method<"setUnicodeBidi", void>(p1); }
	jni::ref<java::lang::String> getVerticalAlign() { return call_method<"getVerticalAlign", jni::ref<java::lang::String>>(); }
	void setVerticalAlign(jni::ref<java::lang::String> p1) { return call_method<"setVerticalAlign", void>(p1); }
	jni::ref<java::lang::String> getVisibility() { return call_method<"getVisibility", jni::ref<java::lang::String>>(); }
	void setVisibility(jni::ref<java::lang::String> p1) { return call_method<"setVisibility", void>(p1); }
	jni::ref<java::lang::String> getVoiceFamily() { return call_method<"getVoiceFamily", jni::ref<java::lang::String>>(); }
	void setVoiceFamily(jni::ref<java::lang::String> p1) { return call_method<"setVoiceFamily", void>(p1); }
	jni::ref<java::lang::String> getVolume() { return call_method<"getVolume", jni::ref<java::lang::String>>(); }
	void setVolume(jni::ref<java::lang::String> p1) { return call_method<"setVolume", void>(p1); }
	jni::ref<java::lang::String> getWhiteSpace() { return call_method<"getWhiteSpace", jni::ref<java::lang::String>>(); }
	void setWhiteSpace(jni::ref<java::lang::String> p1) { return call_method<"setWhiteSpace", void>(p1); }
	jni::ref<java::lang::String> getWidows() { return call_method<"getWidows", jni::ref<java::lang::String>>(); }
	void setWidows(jni::ref<java::lang::String> p1) { return call_method<"setWidows", void>(p1); }
	jni::ref<java::lang::String> getWidth() { return call_method<"getWidth", jni::ref<java::lang::String>>(); }
	void setWidth(jni::ref<java::lang::String> p1) { return call_method<"setWidth", void>(p1); }
	jni::ref<java::lang::String> getWordSpacing() { return call_method<"getWordSpacing", jni::ref<java::lang::String>>(); }
	void setWordSpacing(jni::ref<java::lang::String> p1) { return call_method<"setWordSpacing", void>(p1); }
	jni::ref<java::lang::String> getZIndex() { return call_method<"getZIndex", jni::ref<java::lang::String>>(); }
	void setZIndex(jni::ref<java::lang::String> p1) { return call_method<"setZIndex", void>(p1); }

protected:

	CSS2Properties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSS2PROPERTIES