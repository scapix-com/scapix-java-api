// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/ch/NativeDispatcher.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class FileDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::FileDispatcher>
{
	static constexpr fixed_string class_name = "sun/nio/ch/FileDispatcher";
	using base_classes = std::tuple<scapix::java_api::sun::nio::ch::NativeDispatcher>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER)
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::FileDispatcher : public jni::object_base<"sun/nio/ch/FileDispatcher",
	sun::nio::ch::NativeDispatcher>
{
public:

	static jint NO_LOCK() { return get_static_field<"NO_LOCK", jint>(); }
	static jint LOCKED() { return get_static_field<"LOCKED", jint>(); }
	static jint RET_EX_LOCK() { return get_static_field<"RET_EX_LOCK", jint>(); }
	static jint INTERRUPTED() { return get_static_field<"INTERRUPTED", jint>(); }


protected:

	FileDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILEDISPATCHER
