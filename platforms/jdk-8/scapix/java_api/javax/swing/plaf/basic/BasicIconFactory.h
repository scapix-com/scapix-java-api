// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicIconFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicIconFactory>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicIconFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/Icon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicIconFactory : public jni::object_base<"javax/swing/plaf/basic/BasicIconFactory",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicIconFactory> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::Icon> getMenuItemCheckIcon() { return call_static_method<"getMenuItemCheckIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getMenuItemArrowIcon() { return call_static_method<"getMenuItemArrowIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getMenuArrowIcon() { return call_static_method<"getMenuArrowIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getCheckBoxIcon() { return call_static_method<"getCheckBoxIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getRadioButtonIcon() { return call_static_method<"getRadioButtonIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getCheckBoxMenuItemIcon() { return call_static_method<"getCheckBoxMenuItemIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getRadioButtonMenuItemIcon() { return call_static_method<"getRadioButtonMenuItemIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> createEmptyFrameIcon() { return call_static_method<"createEmptyFrameIcon", jni::ref<javax::swing::Icon>>(); }

protected:

	BasicIconFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICICONFACTORY
