// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::pipe { class AATileGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::pipe::AATileGenerator>
{
	static constexpr fixed_string class_name = "sun/java2d/pipe/AATileGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR)
#define SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::pipe::AATileGenerator : public jni::object_base<"sun/java2d/pipe/AATileGenerator",
	java::lang::Object>
{
public:

	jint getTileWidth() { return call_method<"getTileWidth", jint>(); }
	jint getTileHeight() { return call_method<"getTileHeight", jint>(); }
	jint getTypicalAlpha() { return call_method<"getTypicalAlpha", jint>(); }
	void nextTile() { return call_method<"nextTile", void>(); }
	void getAlpha(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"getAlpha", void>(p1, p2, p3); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	AATileGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_PIPE_AATILEGENERATOR