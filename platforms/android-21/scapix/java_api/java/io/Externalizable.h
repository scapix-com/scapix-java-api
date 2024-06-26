// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class Externalizable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::Externalizable>
{
	static constexpr fixed_string class_name = "java/io/Externalizable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE)
#define SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::Externalizable : public jni::object_base<"java/io/Externalizable",
	java::lang::Object,
	java::io::Serializable>
{
public:

	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }

protected:

	Externalizable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_EXTERNALIZABLE
