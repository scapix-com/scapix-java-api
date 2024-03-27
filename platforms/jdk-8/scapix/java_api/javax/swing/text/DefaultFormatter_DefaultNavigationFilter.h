// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/NavigationFilter.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultFormatter_DefaultNavigationFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultFormatter_DefaultNavigationFilter>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultFormatter$DefaultNavigationFilter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::NavigationFilter, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/JTextComponent.h>
#include <scapix/java_api/javax/swing/text/NavigationFilter_FilterBypass.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultFormatter_DefaultNavigationFilter : public jni::object_base<"javax/swing/text/DefaultFormatter$DefaultNavigationFilter",
	javax::swing::text::NavigationFilter,
	java::io::Serializable>
{
public:

	void setDot(jni::ref<javax::swing::text::NavigationFilter_FilterBypass> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"setDot", void>(p1, p2, p3); }
	void moveDot(jni::ref<javax::swing::text::NavigationFilter_FilterBypass> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"moveDot", void>(p1, p2, p3); }
	jint getNextVisualPositionFrom(jni::ref<javax::swing::text::JTextComponent> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3, jint p4, jni::ref<jni::array<javax::swing::text::Position_Bias>> p5) { return call_method<"getNextVisualPositionFrom", jint>(p1, p2, p3, p4, p5); }

protected:

	DefaultFormatter_DefaultNavigationFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTFORMATTER_DEFAULTNAVIGATIONFILTER