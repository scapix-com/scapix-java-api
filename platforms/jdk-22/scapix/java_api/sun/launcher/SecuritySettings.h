// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS_FWD
#define SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::launcher { class SecuritySettings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::launcher::SecuritySettings>
{
	static constexpr fixed_string class_name = "sun/launcher/SecuritySettings";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS)
#define SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::launcher::SecuritySettings : public jni::object_base<"sun/launcher/SecuritySettings",
	java::lang::Object>
{
public:

	static jni::ref<sun::launcher::SecuritySettings> new_object() { return base_::new_object(); }

protected:

	SecuritySettings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_SECURITYSETTINGS
