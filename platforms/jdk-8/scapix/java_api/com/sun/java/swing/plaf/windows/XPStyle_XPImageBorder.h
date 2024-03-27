// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/AbstractBorder.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class XPStyle_XPImageBorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::XPStyle_XPImageBorder>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/XPStyle$XPImageBorder";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::AbstractBorder, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::windows::XPStyle_XPImageBorder : public jni::object_base<"com/sun/java/swing/plaf/windows/XPStyle$XPImageBorder",
	javax::swing::border::AbstractBorder,
	javax::swing::plaf::UIResource>
{
public:

	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1, p2); }

protected:

	XPStyle_XPImageBorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_XPSTYLE_XPIMAGEBORDER
