// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows::resources { class windows_zh_HK; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::resources::windows_zh_HK>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/resources/windows_zh_HK";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::resources::windows_zh_HK : public jni::object_base<"com/sun/java/swing/plaf/windows/resources/windows_zh_HK",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::resources::windows_zh_HK> new_object() { return base_::new_object(); }

protected:

	windows_zh_HK(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_RESOURCES_WINDOWS_ZH_HK
