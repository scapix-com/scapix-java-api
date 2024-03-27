// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class Flushable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::Flushable>
{
	static constexpr fixed_string class_name = "java/io/Flushable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE)
#define SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::Flushable : public jni::object_base<"java/io/Flushable",
	java::lang::Object>
{
public:

	void flush() { return call_method<"flush", void>(); }

protected:

	Flushable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FLUSHABLE
