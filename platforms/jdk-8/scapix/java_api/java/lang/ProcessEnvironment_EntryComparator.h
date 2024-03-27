// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ProcessEnvironment_EntryComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ProcessEnvironment_EntryComparator>
{
	static constexpr fixed_string class_name = "java/lang/ProcessEnvironment$EntryComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR)
#define SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ProcessEnvironment_EntryComparator : public jni::object_base<"java/lang/ProcessEnvironment$EntryComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	jint compare(jni::ref<java::util::Map_Entry> p1, jni::ref<java::util::Map_Entry> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	ProcessEnvironment_EntryComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PROCESSENVIRONMENT_ENTRYCOMPARATOR
