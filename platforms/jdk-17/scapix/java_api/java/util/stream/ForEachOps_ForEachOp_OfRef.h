// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/ForEachOps_ForEachOp.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class ForEachOps_ForEachOp_OfRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::ForEachOps_ForEachOp_OfRef>
{
	static constexpr fixed_string class_name = "java/util/stream/ForEachOps$ForEachOp$OfRef";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::ForEachOps_ForEachOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::ForEachOps_ForEachOp_OfRef : public jni::object_base<"java/util/stream/ForEachOps$ForEachOp$OfRef",
	java::util::stream::ForEachOps_ForEachOp>
{
public:

	void accept(jni::ref<java::lang::Object> t) { return call_method<"accept", void>(t); }

protected:

	ForEachOps_ForEachOp_OfRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFREF
