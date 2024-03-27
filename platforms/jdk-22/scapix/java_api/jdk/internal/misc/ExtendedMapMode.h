// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class ExtendedMapMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::ExtendedMapMode>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/ExtendedMapMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/channels/FileChannel_MapMode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::ExtendedMapMode : public jni::object_base<"jdk/internal/misc/ExtendedMapMode",
	java::lang::Object>
{
public:

	static jni::ref<java::nio::channels::FileChannel_MapMode> READ_ONLY_SYNC() { return get_static_field<"READ_ONLY_SYNC", jni::ref<java::nio::channels::FileChannel_MapMode>>(); }
	static jni::ref<java::nio::channels::FileChannel_MapMode> READ_WRITE_SYNC() { return get_static_field<"READ_WRITE_SYNC", jni::ref<java::nio::channels::FileChannel_MapMode>>(); }


protected:

	ExtendedMapMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_EXTENDEDMAPMODE
