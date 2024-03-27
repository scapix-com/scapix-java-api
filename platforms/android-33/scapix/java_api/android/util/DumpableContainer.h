// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class DumpableContainer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::DumpableContainer>
{
	static constexpr fixed_string class_name = "android/util/DumpableContainer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER)
#define SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/Dumpable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::DumpableContainer : public jni::object_base<"android/util/DumpableContainer",
	java::lang::Object>
{
public:

	jboolean addDumpable(jni::ref<android::util::Dumpable> p1) { return call_method<"addDumpable", jboolean>(p1); }
	jboolean removeDumpable(jni::ref<android::util::Dumpable> p1) { return call_method<"removeDumpable", jboolean>(p1); }

protected:

	DumpableContainer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_DUMPABLECONTAINER
