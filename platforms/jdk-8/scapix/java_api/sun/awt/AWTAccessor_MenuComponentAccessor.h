// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTAccessor_MenuComponentAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTAccessor_MenuComponentAccessor>
{
	static constexpr fixed_string class_name = "sun/awt/AWTAccessor$MenuComponentAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR)
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/MenuComponent.h>
#include <scapix/java_api/java/awt/MenuContainer.h>
#include <scapix/java_api/java/awt/peer/MenuComponentPeer.h>
#include <scapix/java_api/sun/awt/AppContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTAccessor_MenuComponentAccessor : public jni::object_base<"sun/awt/AWTAccessor$MenuComponentAccessor",
	java::lang::Object>
{
public:

	jni::ref<sun::awt::AppContext> getAppContext(jni::ref<java::awt::MenuComponent> p1) { return call_method<"getAppContext", jni::ref<sun::awt::AppContext>>(p1); }
	void setAppContext(jni::ref<java::awt::MenuComponent> p1, jni::ref<sun::awt::AppContext> p2) { return call_method<"setAppContext", void>(p1, p2); }
	jni::ref<java::awt::MenuContainer> getParent(jni::ref<java::awt::MenuComponent> p1) { return call_method<"getParent", jni::ref<java::awt::MenuContainer>>(p1); }
	jni::ref<java::awt::Font> getFont_NoClientCode(jni::ref<java::awt::MenuComponent> p1) { return call_method<"getFont_NoClientCode", jni::ref<java::awt::Font>>(p1); }
	jni::ref<java::awt::peer::MenuComponentPeer> getPeer(jni::ref<java::awt::MenuComponent> p1) { return call_method<"getPeer", jni::ref<java::awt::peer::MenuComponentPeer>>(p1); }

protected:

	AWTAccessor_MenuComponentAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_MENUCOMPONENTACCESSOR
