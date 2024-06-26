// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EnumMap_EnumMapIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class EnumMap_KeyIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::EnumMap_KeyIterator>
{
	static constexpr fixed_string class_name = "java/util/EnumMap$KeyIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::EnumMap_EnumMapIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Enum.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::EnumMap_KeyIterator : public jni::object_base<"java/util/EnumMap$KeyIterator",
	java::util::EnumMap_EnumMapIterator>
{
public:

	jni::ref<java::lang::Enum> next() { return call_method<"next", jni::ref<java::lang::Enum>>(); }

protected:

	EnumMap_KeyIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ENUMMAP_KEYITERATOR
