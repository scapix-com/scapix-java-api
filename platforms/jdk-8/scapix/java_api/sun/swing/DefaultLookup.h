// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP_FWD
#define SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class DefaultLookup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::DefaultLookup>
{
	static constexpr fixed_string class_name = "sun/swing/DefaultLookup";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP)
#define SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/border/Border.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::DefaultLookup : public jni::object_base<"sun/swing/DefaultLookup",
	java::lang::Object>
{
public:

	static jni::ref<sun::swing::DefaultLookup> new_object() { return base_::new_object(); }
	static void setDefaultLookup(jni::ref<sun::swing::DefaultLookup> p1) { return call_static_method<"setDefaultLookup", void>(p1); }
	static jni::ref<java::lang::Object> get(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"get", jni::ref<java::lang::Object>>(p1, p2, p3); }
	static jint getInt(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jint p4) { return call_static_method<"getInt", jint>(p1, p2, p3, p4); }
	static jint getInt(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getInt", jint>(p1, p2, p3); }
	static jni::ref<java::awt::Insets> getInsets(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jni::ref<java::awt::Insets> p4) { return call_static_method<"getInsets", jni::ref<java::awt::Insets>>(p1, p2, p3, p4); }
	static jni::ref<java::awt::Insets> getInsets(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getInsets", jni::ref<java::awt::Insets>>(p1, p2, p3); }
	static jboolean getBoolean(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jboolean p4) { return call_static_method<"getBoolean", jboolean>(p1, p2, p3, p4); }
	static jboolean getBoolean(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getBoolean", jboolean>(p1, p2, p3); }
	static jni::ref<java::awt::Color> getColor(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jni::ref<java::awt::Color> p4) { return call_static_method<"getColor", jni::ref<java::awt::Color>>(p1, p2, p3, p4); }
	static jni::ref<java::awt::Color> getColor(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getColor", jni::ref<java::awt::Color>>(p1, p2, p3); }
	static jni::ref<javax::swing::Icon> getIcon(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4) { return call_static_method<"getIcon", jni::ref<javax::swing::Icon>>(p1, p2, p3, p4); }
	static jni::ref<javax::swing::Icon> getIcon(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getIcon", jni::ref<javax::swing::Icon>>(p1, p2, p3); }
	static jni::ref<javax::swing::border::Border> getBorder(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::border::Border> p4) { return call_static_method<"getBorder", jni::ref<javax::swing::border::Border>>(p1, p2, p3, p4); }
	static jni::ref<javax::swing::border::Border> getBorder(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getBorder", jni::ref<javax::swing::border::Border>>(p1, p2, p3); }
	jni::ref<java::lang::Object> getDefault(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::ComponentUI> p2, jni::ref<java::lang::String> p3) { return call_method<"getDefault", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	DefaultLookup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_DEFAULTLOOKUP