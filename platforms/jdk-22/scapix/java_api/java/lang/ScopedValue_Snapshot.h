// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ScopedValue_Snapshot; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ScopedValue_Snapshot>
{
	static constexpr fixed_string class_name = "java/lang/ScopedValue$Snapshot";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT)
#define SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ScopedValue_Snapshot : public jni::object_base<"java/lang/ScopedValue$Snapshot",
	java::lang::Object>
{
public:


protected:

	ScopedValue_Snapshot(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SCOPEDVALUE_SNAPSHOT
