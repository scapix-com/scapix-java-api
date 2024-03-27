// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class BadBinaryOpValueExpException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::BadBinaryOpValueExpException>
{
	static constexpr fixed_string class_name = "javax/management/BadBinaryOpValueExpException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ValueExp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::BadBinaryOpValueExpException : public jni::object_base<"javax/management/BadBinaryOpValueExpException",
	java::lang::Exception>
{
public:

	static jni::ref<javax::management::BadBinaryOpValueExpException> new_object(jni::ref<javax::management::ValueExp> p1) { return base_::new_object(p1); }
	jni::ref<javax::management::ValueExp> getExp() { return call_method<"getExp", jni::ref<javax::management::ValueExp>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BadBinaryOpValueExpException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BADBINARYOPVALUEEXPEXCEPTION
