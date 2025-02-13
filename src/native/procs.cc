#include "webgl.h"
void WebGLRenderingContext::initPointers(){
	glUniform1f=reinterpret_cast<PFNGLUNIFORM1FPROC>(eglGetProcAddress("glUniform1f"));
	glUniform2f=reinterpret_cast<PFNGLUNIFORM2FPROC>(eglGetProcAddress("glUniform2f"));
	glUniform3f=reinterpret_cast<PFNGLUNIFORM3FPROC>(eglGetProcAddress("glUniform3f"));
	glUniform4f=reinterpret_cast<PFNGLUNIFORM4FPROC>(eglGetProcAddress("glUniform4f"));
	glUniform1i=reinterpret_cast<PFNGLUNIFORM1IPROC>(eglGetProcAddress("glUniform1i"));
	glUniform2i=reinterpret_cast<PFNGLUNIFORM2IPROC>(eglGetProcAddress("glUniform2i"));
	glUniform3i=reinterpret_cast<PFNGLUNIFORM3IPROC>(eglGetProcAddress("glUniform3i"));
	glUniform4i=reinterpret_cast<PFNGLUNIFORM4IPROC>(eglGetProcAddress("glUniform4i"));
	glPixelStorei=reinterpret_cast<PFNGLPIXELSTOREIPROC>(eglGetProcAddress("glPixelStorei"));
	glBindAttribLocation=reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(eglGetProcAddress("glBindAttribLocation"));
	glDrawArrays=reinterpret_cast<PFNGLDRAWARRAYSPROC>(eglGetProcAddress("glDrawArrays"));
	glUniformMatrix2fv=reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(eglGetProcAddress("glUniformMatrix2fv"));
	glUniformMatrix3fv=reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(eglGetProcAddress("glUniformMatrix3fv"));
	glUniformMatrix4fv=reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(eglGetProcAddress("glUniformMatrix4fv"));
	glGenerateMipmap=reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(eglGetProcAddress("glGenerateMipmap"));
	glGetAttribLocation=reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(eglGetProcAddress("glGetAttribLocation"));
	glDepthFunc=reinterpret_cast<PFNGLDEPTHFUNCPROC>(eglGetProcAddress("glDepthFunc"));
	glViewport=reinterpret_cast<PFNGLVIEWPORTPROC>(eglGetProcAddress("glViewport"));
	glCreateShader=reinterpret_cast<PFNGLCREATESHADERPROC>(eglGetProcAddress("glCreateShader"));
	glShaderSource=reinterpret_cast<PFNGLSHADERSOURCEPROC>(eglGetProcAddress("glShaderSource"));
	glCompileShader=reinterpret_cast<PFNGLCOMPILESHADERPROC>(eglGetProcAddress("glCompileShader"));
	glGetShaderInfoLog=reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(eglGetProcAddress("glGetShaderInfoLog"));
	glCreateProgram=reinterpret_cast<PFNGLCREATEPROGRAMPROC>(eglGetProcAddress("glCreateProgram"));
	glAttachShader=reinterpret_cast<PFNGLATTACHSHADERPROC>(eglGetProcAddress("glAttachShader"));
	glLinkProgram=reinterpret_cast<PFNGLLINKPROGRAMPROC>(eglGetProcAddress("glLinkProgram"));
	glGetUniformLocation=reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(eglGetProcAddress("glGetUniformLocation"));
	glClearColor=reinterpret_cast<PFNGLCLEARCOLORPROC>(eglGetProcAddress("glClearColor"));
	glClearDepthf=reinterpret_cast<PFNGLCLEARDEPTHFPROC>(eglGetProcAddress("glClearDepthf"));
	glDisable=reinterpret_cast<PFNGLDISABLEPROC>(eglGetProcAddress("glDisable"));
	glEnable=reinterpret_cast<PFNGLENABLEPROC>(eglGetProcAddress("glEnable"));
	glGenTextures=reinterpret_cast<PFNGLGENTEXTURESPROC>(eglGetProcAddress("glGenTextures"));
	glBindTexture=reinterpret_cast<PFNGLBINDTEXTUREPROC>(eglGetProcAddress("glBindTexture"));
	glTexImage2D=reinterpret_cast<PFNGLTEXIMAGE2DPROC>(eglGetProcAddress("glTexImage2D"));
	glTexParameteri=reinterpret_cast<PFNGLTEXPARAMETERIPROC>(eglGetProcAddress("glTexParameteri"));
	glTexParameterf=reinterpret_cast<PFNGLTEXPARAMETERFPROC>(eglGetProcAddress("glTexParameterf"));
	glClear=reinterpret_cast<PFNGLCLEARPROC>(eglGetProcAddress("glClear"));
	glUseProgram=reinterpret_cast<PFNGLUSEPROGRAMPROC>(eglGetProcAddress("glUseProgram"));
	glGenBuffers=reinterpret_cast<PFNGLGENBUFFERSPROC>(eglGetProcAddress("glGenBuffers"));
	glBindBuffer=reinterpret_cast<PFNGLBINDBUFFERPROC>(eglGetProcAddress("glBindBuffer"));
	glGenFramebuffers=reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(eglGetProcAddress("glGenFramebuffers"));
	glBindFramebuffer=reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(eglGetProcAddress("glBindFramebuffer"));
	glFramebufferTexture2D=reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(eglGetProcAddress("glFramebufferTexture2D"));
	glBufferData=reinterpret_cast<PFNGLBUFFERDATAPROC>(eglGetProcAddress("glBufferData"));
	glBufferSubData=reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(eglGetProcAddress("glBufferSubData"));
	glBlendEquation=reinterpret_cast<PFNGLBLENDEQUATIONPROC>(eglGetProcAddress("glBlendEquation"));
	glBlendFunc=reinterpret_cast<PFNGLBLENDFUNCPROC>(eglGetProcAddress("glBlendFunc"));
	glEnableVertexAttribArray=reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(eglGetProcAddress("glEnableVertexAttribArray"));
	glVertexAttribPointer=reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(eglGetProcAddress("glVertexAttribPointer"));
	glActiveTexture=reinterpret_cast<PFNGLACTIVETEXTUREPROC>(eglGetProcAddress("glActiveTexture"));
	glDrawElements=reinterpret_cast<PFNGLDRAWELEMENTSPROC>(eglGetProcAddress("glDrawElements"));
	glFlush=reinterpret_cast<PFNGLFLUSHPROC>(eglGetProcAddress("glFlush"));
	glFinish=reinterpret_cast<PFNGLFINISHPROC>(eglGetProcAddress("glFinish"));
	glVertexAttrib1f=reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(eglGetProcAddress("glVertexAttrib1f"));
	glVertexAttrib2f=reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(eglGetProcAddress("glVertexAttrib2f"));
	glVertexAttrib3f=reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(eglGetProcAddress("glVertexAttrib3f"));
	glVertexAttrib4f=reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(eglGetProcAddress("glVertexAttrib4f"));
	glBlendColor=reinterpret_cast<PFNGLBLENDCOLORPROC>(eglGetProcAddress("glBlendColor"));
	glBlendEquationSeparate=reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(eglGetProcAddress("glBlendEquationSeparate"));
	glBlendFuncSeparate=reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(eglGetProcAddress("glBlendFuncSeparate"));
	glClearStencil=reinterpret_cast<PFNGLCLEARSTENCILPROC>(eglGetProcAddress("glClearStencil"));
	glColorMask=reinterpret_cast<PFNGLCOLORMASKPROC>(eglGetProcAddress("glColorMask"));
	glCopyTexImage2D=reinterpret_cast<PFNGLCOPYTEXIMAGE2DPROC>(eglGetProcAddress("glCopyTexImage2D"));
	glCopyTexSubImage2D=reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DPROC>(eglGetProcAddress("glCopyTexSubImage2D"));
	glCullFace=reinterpret_cast<PFNGLCULLFACEPROC>(eglGetProcAddress("glCullFace"));
	glDepthMask=reinterpret_cast<PFNGLDEPTHMASKPROC>(eglGetProcAddress("glDepthMask"));
	glDepthRangef=reinterpret_cast<PFNGLDEPTHRANGEFPROC>(eglGetProcAddress("glDepthRangef"));
	glHint=reinterpret_cast<PFNGLHINTPROC>(eglGetProcAddress("glHint"));
	glIsEnabled=reinterpret_cast<PFNGLISENABLEDPROC>(eglGetProcAddress("glIsEnabled"));
	glLineWidth=reinterpret_cast<PFNGLLINEWIDTHPROC>(eglGetProcAddress("glLineWidth"));
	glPolygonOffset=reinterpret_cast<PFNGLPOLYGONOFFSETPROC>(eglGetProcAddress("glPolygonOffset"));
	glGetShaderPrecisionFormat=reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(eglGetProcAddress("glGetShaderPrecisionFormat"));
	glStencilFunc=reinterpret_cast<PFNGLSTENCILFUNCPROC>(eglGetProcAddress("glStencilFunc"));
	glStencilFuncSeparate=reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(eglGetProcAddress("glStencilFuncSeparate"));
	glStencilMask=reinterpret_cast<PFNGLSTENCILMASKPROC>(eglGetProcAddress("glStencilMask"));
	glStencilMaskSeparate=reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(eglGetProcAddress("glStencilMaskSeparate"));
	glStencilOp=reinterpret_cast<PFNGLSTENCILOPPROC>(eglGetProcAddress("glStencilOp"));
	glStencilOpSeparate=reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(eglGetProcAddress("glStencilOpSeparate"));
	glScissor=reinterpret_cast<PFNGLSCISSORPROC>(eglGetProcAddress("glScissor"));
	glBindRenderbuffer=reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(eglGetProcAddress("glBindRenderbuffer"));
	glGenRenderbuffers=reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(eglGetProcAddress("glGenRenderbuffers"));
	glFramebufferRenderbuffer=reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(eglGetProcAddress("glFramebufferRenderbuffer"));
	glDeleteBuffers=reinterpret_cast<PFNGLDELETEBUFFERSPROC>(eglGetProcAddress("glDeleteBuffers"));
	glDeleteFramebuffers=reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(eglGetProcAddress("glDeleteFramebuffers"));
	glDeleteProgram=reinterpret_cast<PFNGLDELETEPROGRAMPROC>(eglGetProcAddress("glDeleteProgram"));
	glDeleteRenderbuffers=reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(eglGetProcAddress("glDeleteRenderbuffers"));
	glDeleteShader=reinterpret_cast<PFNGLDELETESHADERPROC>(eglGetProcAddress("glDeleteShader"));
	glDeleteTextures=reinterpret_cast<PFNGLDELETETEXTURESPROC>(eglGetProcAddress("glDeleteTextures"));
	glDetachShader=reinterpret_cast<PFNGLDETACHSHADERPROC>(eglGetProcAddress("glDetachShader"));
	glDisableVertexAttribArray=reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(eglGetProcAddress("glDisableVertexAttribArray"));
	glIsBuffer=reinterpret_cast<PFNGLISBUFFERPROC>(eglGetProcAddress("glIsBuffer"));
	glIsFramebuffer=reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(eglGetProcAddress("glIsFramebuffer"));
	glIsProgram=reinterpret_cast<PFNGLISPROGRAMPROC>(eglGetProcAddress("glIsProgram"));
	glIsRenderbuffer=reinterpret_cast<PFNGLISRENDERBUFFERPROC>(eglGetProcAddress("glIsRenderbuffer"));
	glIsShader=reinterpret_cast<PFNGLISSHADERPROC>(eglGetProcAddress("glIsShader"));
	glIsTexture=reinterpret_cast<PFNGLISTEXTUREPROC>(eglGetProcAddress("glIsTexture"));
	glRenderbufferStorage=reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(eglGetProcAddress("glRenderbufferStorage"));
	glGetShaderSource=reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(eglGetProcAddress("glGetShaderSource"));
	glValidateProgram=reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(eglGetProcAddress("glValidateProgram"));
	glTexSubImage2D=reinterpret_cast<PFNGLTEXSUBIMAGE2DPROC>(eglGetProcAddress("glTexSubImage2D"));
	glReadPixels=reinterpret_cast<PFNGLREADPIXELSPROC>(eglGetProcAddress("glReadPixels"));
	glGetActiveAttrib=reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(eglGetProcAddress("glGetActiveAttrib"));
	glGetActiveUniform=reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(eglGetProcAddress("glGetActiveUniform"));
	glGetAttachedShaders=reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(eglGetProcAddress("glGetAttachedShaders"));
	glGetProgramInfoLog=reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(eglGetProcAddress("glGetProgramInfoLog"));
	glGetRenderbufferParameteriv=reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(eglGetProcAddress("glGetRenderbufferParameteriv"));
	glCheckFramebufferStatus=reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(eglGetProcAddress("glCheckFramebufferStatus"));
	glFrontFace=reinterpret_cast<PFNGLFRONTFACEPROC>(eglGetProcAddress("glFrontFace"));
	glSampleCoverage=reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(eglGetProcAddress("glSampleCoverage"));
	glGetUniformiv=reinterpret_cast<PFNGLGETUNIFORMIVPROC>(eglGetProcAddress("glGetUniformiv"));
	glGetUniformfv=reinterpret_cast<PFNGLGETUNIFORMFVPROC>(eglGetProcAddress("glGetUniformfv"));
	glGetVertexAttribiv=reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(eglGetProcAddress("glGetVertexAttribiv"));
	glGetVertexAttribfv=reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(eglGetProcAddress("glGetVertexAttribfv"));
	glGetFramebufferAttachmentParameteriv=reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(eglGetProcAddress("glGetFramebufferAttachmentParameteriv"));
	glGetBufferParameteriv=reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(eglGetProcAddress("glGetBufferParameteriv"));
	glGetFloatv=reinterpret_cast<PFNGLGETFLOATVPROC>(eglGetProcAddress("glGetFloatv"));
	glGetIntegerv=reinterpret_cast<PFNGLGETINTEGERVPROC>(eglGetProcAddress("glGetIntegerv"));
	glGetBooleanv=reinterpret_cast<PFNGLGETBOOLEANVPROC>(eglGetProcAddress("glGetBooleanv"));
	glGetProgramiv=reinterpret_cast<PFNGLGETPROGRAMIVPROC>(eglGetProcAddress("glGetProgramiv"));
	glGetTexParameterfv=reinterpret_cast<PFNGLGETTEXPARAMETERFVPROC>(eglGetProcAddress("glGetTexParameterfv"));
	glGetTexParameteriv=reinterpret_cast<PFNGLGETTEXPARAMETERIVPROC>(eglGetProcAddress("glGetTexParameteriv"));
	glGetShaderiv=reinterpret_cast<PFNGLGETSHADERIVPROC>(eglGetProcAddress("glGetShaderiv"));
	glGetVertexAttribPointerv=reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(eglGetProcAddress("glGetVertexAttribPointerv"));
	glGetString=reinterpret_cast<PFNGLGETSTRINGPROC>(eglGetProcAddress("glGetString"));
	glGetError=reinterpret_cast<PFNGLGETERRORPROC>(eglGetProcAddress("glGetError"));
	glDrawBuffersEXT=reinterpret_cast<PFNGLDRAWBUFFERSEXTPROC>(eglGetProcAddress("glDrawBuffersEXT"));
	glGenVertexArraysOES=reinterpret_cast<PFNGLGENVERTEXARRAYSOESPROC>(eglGetProcAddress("glGenVertexArraysOES"));
	glDeleteVertexArraysOES=reinterpret_cast<PFNGLDELETEVERTEXARRAYSOESPROC>(eglGetProcAddress("glDeleteVertexArraysOES"));
	glIsVertexArrayOES=reinterpret_cast<PFNGLISVERTEXARRAYOESPROC>(eglGetProcAddress("glIsVertexArrayOES"));
	glBindVertexArrayOES=reinterpret_cast<PFNGLBINDVERTEXARRAYOESPROC>(eglGetProcAddress("glBindVertexArrayOES"));
}

void WebGLRenderingContext::initExtensionPointers(GLInstancedDrawingExtension idx){
	if (idx == GLIDX_ANGLE) {
		glDrawArraysInstanced=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawArraysInstancedANGLE"));
		glDrawElementsInstanced=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawElementsInstancedANGLE"));
		glVertexAttribDivisor=reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(eglGetProcAddress("glVertexAttribDivisorANGLE"));
	} else if (idx == GLIDX_NVIDIA) {
		glDrawArraysInstanced=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawArraysInstancedNV"));
		glDrawElementsInstanced=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawElementsInstancedNV"));
		glVertexAttribDivisor=reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(eglGetProcAddress("glVertexAttribDivisorNV"));
	} else {
		glDrawArraysInstanced=reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawArraysInstanced"));
		glDrawElementsInstanced=reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDANGLEPROC>(eglGetProcAddress("glDrawElementsInstanced"));
		glVertexAttribDivisor=reinterpret_cast<PFNGLVERTEXATTRIBDIVISORANGLEPROC>(eglGetProcAddress("glVertexAttribDivisor"));
	}
}
