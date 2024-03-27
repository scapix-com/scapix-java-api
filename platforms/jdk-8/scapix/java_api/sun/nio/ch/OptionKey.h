// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class OptionKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::OptionKey>
{
	static constexpr fixed_string class_name = "sun/nio/ch/OptionKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY)
#define SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::OptionKey : public jni::object_base<"sun/nio/ch/OptionKey",
	java::lang::Object>
{
public:


protected:

	OptionKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_OPTIONKEY
