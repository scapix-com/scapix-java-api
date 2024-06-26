// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_TreeMapSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_TreeMapSpliterator>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$TreeMapSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_TreeMapSpliterator : public jni::object_base<"java/util/TreeMap$TreeMapSpliterator",
	java::lang::Object>
{
public:

	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }

protected:

	TreeMap_TreeMapSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_TREEMAPSPLITERATOR
