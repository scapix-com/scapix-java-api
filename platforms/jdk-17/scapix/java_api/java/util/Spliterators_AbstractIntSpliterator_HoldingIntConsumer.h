// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Spliterators_AbstractIntSpliterator_HoldingIntConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Spliterators_AbstractIntSpliterator_HoldingIntConsumer>
{
	static constexpr fixed_string class_name = "java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::IntConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER)
#define SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Spliterators_AbstractIntSpliterator_HoldingIntConsumer : public jni::object_base<"java/util/Spliterators$AbstractIntSpliterator$HoldingIntConsumer",
	java::lang::Object,
	java::util::function::IntConsumer>
{
public:

	void accept(jint value) { return call_method<"accept", void>(value); }

protected:

	Spliterators_AbstractIntSpliterator_HoldingIntConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SPLITERATORS_ABSTRACTINTSPLITERATOR_HOLDINGINTCONSUMER
