// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class MatchOps_MatchKind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::MatchOps_MatchKind>
{
	static constexpr fixed_string class_name = "java/util/stream/MatchOps$MatchKind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::MatchOps_MatchKind : public jni::object_base<"java/util/stream/MatchOps$MatchKind",
	java::lang::Enum>
{
public:

	static jni::ref<java::util::stream::MatchOps_MatchKind> ANY() { return get_static_field<"ANY", jni::ref<java::util::stream::MatchOps_MatchKind>>(); }
	static jni::ref<java::util::stream::MatchOps_MatchKind> ALL() { return get_static_field<"ALL", jni::ref<java::util::stream::MatchOps_MatchKind>>(); }
	static jni::ref<java::util::stream::MatchOps_MatchKind> NONE() { return get_static_field<"NONE", jni::ref<java::util::stream::MatchOps_MatchKind>>(); }

	static jni::ref<jni::array<java::util::stream::MatchOps_MatchKind>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::stream::MatchOps_MatchKind>>>(); }
	static jni::ref<java::util::stream::MatchOps_MatchKind> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::util::stream::MatchOps_MatchKind>>(name); }

protected:

	MatchOps_MatchKind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_MATCHOPS_MATCHKIND
