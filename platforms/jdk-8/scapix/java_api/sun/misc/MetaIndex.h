// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_METAINDEX_FWD
#define SCAPIX_JAVA_API_SUN_MISC_METAINDEX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class MetaIndex; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::MetaIndex>
{
	static constexpr fixed_string class_name = "sun/misc/MetaIndex";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_METAINDEX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_METAINDEX)
#define SCAPIX_JAVA_API_SUN_MISC_METAINDEX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::MetaIndex : public jni::object_base<"sun/misc/MetaIndex",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::MetaIndex> forJar(jni::ref<java::io::File> p1) { return call_static_method<"forJar", jni::ref<sun::misc::MetaIndex>>(p1); }
	static void registerDirectory(jni::ref<java::io::File> p1) { return call_static_method<"registerDirectory", void>(p1); }
	jboolean mayContain(jni::ref<java::lang::String> p1) { return call_method<"mayContain", jboolean>(p1); }

protected:

	MetaIndex(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_METAINDEX
