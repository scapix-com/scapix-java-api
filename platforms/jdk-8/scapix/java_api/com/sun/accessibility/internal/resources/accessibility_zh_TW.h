// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW_FWD
#define SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::accessibility::internal::resources { class accessibility_zh_TW; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::accessibility::internal::resources::accessibility_zh_TW>
{
	static constexpr fixed_string class_name = "com/sun/accessibility/internal/resources/accessibility_zh_TW";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW)
#define SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::accessibility::internal::resources::accessibility_zh_TW : public jni::object_base<"com/sun/accessibility/internal/resources/accessibility_zh_TW",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::accessibility::internal::resources::accessibility_zh_TW> new_object() { return base_::new_object(); }

protected:

	accessibility_zh_TW(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ACCESSIBILITY_INTERNAL_RESOURCES_ACCESSIBILITY_ZH_TW
