// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/WeakHashMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ClassValue_ClassValueMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ClassValue_ClassValueMap>
{
	static constexpr fixed_string class_name = "java/lang/ClassValue$ClassValueMap";
	using base_classes = std::tuple<scapix::java_api::java::util::WeakHashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::ClassValue_ClassValueMap : public jni::object_base<"java/lang/ClassValue$ClassValueMap",
	java::util::WeakHashMap>
{
public:


protected:

	ClassValue_ClassValueMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSVALUE_CLASSVALUEMAP
