// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class Style; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::Style>
{
	static constexpr fixed_string class_name = "javax/swing/text/Style";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::MutableAttributeSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::Style : public jni::object_base<"javax/swing/text/Style",
	java::lang::Object,
	javax::swing::text::MutableAttributeSet>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }

protected:

	Style(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLE
