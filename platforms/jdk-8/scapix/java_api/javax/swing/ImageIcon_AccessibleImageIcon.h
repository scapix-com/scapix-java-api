// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/accessibility/AccessibleIcon.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ImageIcon_AccessibleImageIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ImageIcon_AccessibleImageIcon>
{
	static constexpr fixed_string class_name = "javax/swing/ImageIcon$AccessibleImageIcon";
	using base_classes = std::tuple<scapix::java_api::javax::accessibility::AccessibleContext, scapix::java_api::javax::accessibility::AccessibleIcon, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON)
#define SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::ImageIcon_AccessibleImageIcon : public jni::object_base<"javax/swing/ImageIcon$AccessibleImageIcon",
	javax::accessibility::AccessibleContext,
	javax::accessibility::AccessibleIcon,
	java::io::Serializable>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleParent() { return call_method<"getAccessibleParent", jni::ref<javax::accessibility::Accessible>>(); }
	jint getAccessibleIndexInParent() { return call_method<"getAccessibleIndexInParent", jint>(); }
	jint getAccessibleChildrenCount() { return call_method<"getAccessibleChildrenCount", jint>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleChild(jint p1) { return call_method<"getAccessibleChild", jni::ref<javax::accessibility::Accessible>>(p1); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jni::ref<java::lang::String> getAccessibleIconDescription() { return call_method<"getAccessibleIconDescription", jni::ref<java::lang::String>>(); }
	void setAccessibleIconDescription(jni::ref<java::lang::String> p1) { return call_method<"setAccessibleIconDescription", void>(p1); }
	jint getAccessibleIconHeight() { return call_method<"getAccessibleIconHeight", jint>(); }
	jint getAccessibleIconWidth() { return call_method<"getAccessibleIconWidth", jint>(); }

protected:

	ImageIcon_AccessibleImageIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_IMAGEICON_ACCESSIBLEIMAGEICON