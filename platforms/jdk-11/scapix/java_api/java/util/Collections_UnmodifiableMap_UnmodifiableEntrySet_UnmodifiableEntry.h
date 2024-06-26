// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntry>
{
	static constexpr fixed_string class_name = "java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntry : public jni::object_base<"java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry",
	java::lang::Object,
	java::util::Map_Entry>
{
public:

	jni::ref<java::lang::Object> getKey() { return call_method<"getKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> setValue(jni::ref<java::lang::Object> value) { return call_method<"setValue", jni::ref<java::lang::Object>>(value); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Collections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_UNMODIFIABLEMAP_UNMODIFIABLEENTRYSET_UNMODIFIABLEENTRY
