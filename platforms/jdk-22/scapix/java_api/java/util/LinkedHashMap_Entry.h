// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class LinkedHashMap_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::LinkedHashMap_Entry>
{
	static constexpr fixed_string class_name = "java/util/LinkedHashMap$Entry";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY)
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::LinkedHashMap_Entry : public jni::object_base<"java/util/LinkedHashMap$Entry",
	java::util::HashMap_Node>
{
public:


protected:

	LinkedHashMap_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_ENTRY
