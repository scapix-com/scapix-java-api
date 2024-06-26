// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR_FWD
#define SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::launcher { class LauncherHelper_JrtFirstComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::launcher::LauncherHelper_JrtFirstComparator>
{
	static constexpr fixed_string class_name = "sun/launcher/LauncherHelper$JrtFirstComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR)
#define SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/module/ModuleReference.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::launcher::LauncherHelper_JrtFirstComparator : public jni::object_base<"sun/launcher/LauncherHelper$JrtFirstComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	jint compare(jni::ref<java::lang::module::ModuleReference> a, jni::ref<java::lang::module::ModuleReference> b) { return call_method<"compare", jint>(a, b); }

protected:

	LauncherHelper_JrtFirstComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_LAUNCHER_LAUNCHERHELPER_JRTFIRSTCOMPARATOR
