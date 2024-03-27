// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/SubList.h>
#include <scapix/java_api/java/util/RandomAccess.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class RandomAccessSubList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::RandomAccessSubList>
{
	static constexpr fixed_string class_name = "java/util/RandomAccessSubList";
	using base_classes = std::tuple<scapix::java_api::java::util::SubList, scapix::java_api::java::util::RandomAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST)
#define SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::RandomAccessSubList : public jni::object_base<"java/util/RandomAccessSubList",
	java::util::SubList,
	java::util::RandomAccess>
{
public:

	jni::ref<java::util::List> subList(jint p1, jint p2) { return call_method<"subList", jni::ref<java::util::List>>(p1, p2); }

protected:

	RandomAccessSubList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_RANDOMACCESSSUBLIST