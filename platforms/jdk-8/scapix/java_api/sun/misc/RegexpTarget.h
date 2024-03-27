// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class RegexpTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::RegexpTarget>
{
	static constexpr fixed_string class_name = "sun/misc/RegexpTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET)
#define SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::RegexpTarget : public jni::object_base<"sun/misc/RegexpTarget",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> found(jni::ref<java::lang::String> p1) { return call_method<"found", jni::ref<java::lang::Object>>(p1); }

protected:

	RegexpTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXPTARGET
