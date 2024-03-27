// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION_FWD
#define SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class OSInfo_WindowsVersion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::OSInfo_WindowsVersion>
{
	static constexpr fixed_string class_name = "sun/awt/OSInfo$WindowsVersion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION)
#define SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::OSInfo_WindowsVersion : public jni::object_base<"sun/awt/OSInfo$WindowsVersion",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint getMajor() { return call_method<"getMajor", jint>(); }
	jint getMinor() { return call_method<"getMinor", jint>(); }
	jint compareTo(jni::ref<sun::awt::OSInfo_WindowsVersion> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OSInfo_WindowsVersion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_OSINFO_WINDOWSVERSION
