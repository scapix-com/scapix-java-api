// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class TabableView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::TabableView>
{
	static constexpr fixed_string class_name = "javax/swing/text/TabableView";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/TabExpander.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::TabableView : public jni::object_base<"javax/swing/text/TabableView",
	java::lang::Object>
{
public:

	jfloat getTabbedSpan(jfloat p1, jni::ref<javax::swing::text::TabExpander> p2) { return call_method<"getTabbedSpan", jfloat>(p1, p2); }
	jfloat getPartialSpan(jint p1, jint p2) { return call_method<"getPartialSpan", jfloat>(p1, p2); }

protected:

	TabableView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABABLEVIEW
