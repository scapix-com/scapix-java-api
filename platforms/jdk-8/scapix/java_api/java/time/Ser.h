// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Externalizable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TIME_SER_FWD
#define SCAPIX_JAVA_API_JAVA_TIME_SER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::time { class Ser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::time::Ser>
{
	static constexpr fixed_string class_name = "java/time/Ser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Externalizable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_SER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TIME_SER)
#define SCAPIX_JAVA_API_JAVA_TIME_SER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::time::Ser : public jni::object_base<"java/time/Ser",
	java::lang::Object,
	java::io::Externalizable>
{
public:

	static jni::ref<java::time::Ser> new_object() { return base_::new_object(); }
	void writeExternal(jni::ref<java::io::ObjectOutput> p1) { return call_method<"writeExternal", void>(p1); }
	void readExternal(jni::ref<java::io::ObjectInput> p1) { return call_method<"readExternal", void>(p1); }

protected:

	Ser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TIME_SER
