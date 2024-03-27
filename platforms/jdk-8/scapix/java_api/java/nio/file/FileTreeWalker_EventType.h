// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileTreeWalker_EventType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileTreeWalker_EventType>
{
	static constexpr fixed_string class_name = "java/nio/file/FileTreeWalker$EventType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::FileTreeWalker_EventType : public jni::object_base<"java/nio/file/FileTreeWalker$EventType",
	java::lang::Enum>
{
public:

	static jni::ref<java::nio::file::FileTreeWalker_EventType> START_DIRECTORY() { return get_static_field<"START_DIRECTORY", jni::ref<java::nio::file::FileTreeWalker_EventType>>(); }
	static jni::ref<java::nio::file::FileTreeWalker_EventType> END_DIRECTORY() { return get_static_field<"END_DIRECTORY", jni::ref<java::nio::file::FileTreeWalker_EventType>>(); }
	static jni::ref<java::nio::file::FileTreeWalker_EventType> ENTRY() { return get_static_field<"ENTRY", jni::ref<java::nio::file::FileTreeWalker_EventType>>(); }

	static jni::ref<jni::array<java::nio::file::FileTreeWalker_EventType>> values() { return call_static_method<"values", jni::ref<jni::array<java::nio::file::FileTreeWalker_EventType>>>(); }
	static jni::ref<java::nio::file::FileTreeWalker_EventType> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::nio::file::FileTreeWalker_EventType>>(p1); }

protected:

	FileTreeWalker_EventType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEWALKER_EVENTTYPE
