// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class FileTreeIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::FileTreeIterator>
{
	static constexpr fixed_string class_name = "java/nio/file/FileTreeIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/FileTreeWalker_Event.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::FileTreeIterator : public jni::object_base<"java/nio/file/FileTreeIterator",
	java::lang::Object,
	java::util::Iterator,
	java::io::Closeable>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::nio::file::FileTreeWalker_Event> next() { return call_method<"next", jni::ref<java::nio::file::FileTreeWalker_Event>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	FileTreeIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILETREEITERATOR