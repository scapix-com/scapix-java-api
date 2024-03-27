// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/TextComponent_AccessibleAWTTextComponent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class TextArea_AccessibleAWTTextArea; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::TextArea_AccessibleAWTTextArea>
{
	static constexpr fixed_string class_name = "java/awt/TextArea$AccessibleAWTTextArea";
	using base_classes = std::tuple<scapix::java_api::java::awt::TextComponent_AccessibleAWTTextComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA)
#define SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::TextArea_AccessibleAWTTextArea : public jni::object_base<"java/awt/TextArea$AccessibleAWTTextArea",
	java::awt::TextComponent_AccessibleAWTTextComponent>
{
public:

	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }

protected:

	TextArea_AccessibleAWTTextArea(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TEXTAREA_ACCESSIBLEAWTTEXTAREA
