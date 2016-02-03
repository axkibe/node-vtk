/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractGridConnectivityWrap.h"
#include "vtkStructuredAMRGridConnectivityWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkPointDataWrap.h"
#include "vtkCellDataWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredAMRGridConnectivityWrap::ptpl;

VtkStructuredAMRGridConnectivityWrap::VtkStructuredAMRGridConnectivityWrap()
{ }

VtkStructuredAMRGridConnectivityWrap::VtkStructuredAMRGridConnectivityWrap(vtkSmartPointer<vtkStructuredAMRGridConnectivity> _native)
{ native = _native; }

VtkStructuredAMRGridConnectivityWrap::~VtkStructuredAMRGridConnectivityWrap()
{ }

void VtkStructuredAMRGridConnectivityWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredAMRGridConnectivity").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredAMRGridConnectivity").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredAMRGridConnectivityWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredAMRGridConnectivityWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractGridConnectivityWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractGridConnectivityWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredAMRGridConnectivityWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeNeighbors", ComputeNeighbors);
	Nan::SetPrototypeMethod(tpl, "computeNeighbors", ComputeNeighbors);

	Nan::SetPrototypeMethod(tpl, "CreateGhostLayers", CreateGhostLayers);
	Nan::SetPrototypeMethod(tpl, "createGhostLayers", CreateGhostLayers);

	Nan::SetPrototypeMethod(tpl, "GetBalancedRefinement", GetBalancedRefinement);
	Nan::SetPrototypeMethod(tpl, "getBalancedRefinement", GetBalancedRefinement);

	Nan::SetPrototypeMethod(tpl, "GetCellCentered", GetCellCentered);
	Nan::SetPrototypeMethod(tpl, "getCellCentered", GetCellCentered);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGhostedExtent", GetGhostedExtent);
	Nan::SetPrototypeMethod(tpl, "getGhostedExtent", GetGhostedExtent);

	Nan::SetPrototypeMethod(tpl, "GetNodeCentered", GetNodeCentered);
	Nan::SetPrototypeMethod(tpl, "getNodeCentered", GetNodeCentered);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighbors", GetNumberOfNeighbors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighbors", GetNumberOfNeighbors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterGrid", RegisterGrid);
	Nan::SetPrototypeMethod(tpl, "registerGrid", RegisterGrid);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBalancedRefinement", SetBalancedRefinement);
	Nan::SetPrototypeMethod(tpl, "setBalancedRefinement", SetBalancedRefinement);

	Nan::SetPrototypeMethod(tpl, "SetCellCentered", SetCellCentered);
	Nan::SetPrototypeMethod(tpl, "setCellCentered", SetCellCentered);

	Nan::SetPrototypeMethod(tpl, "SetNodeCentered", SetNodeCentered);
	Nan::SetPrototypeMethod(tpl, "setNodeCentered", SetNodeCentered);

	ptpl.Reset( tpl );
}

void VtkStructuredAMRGridConnectivityWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredAMRGridConnectivity> native = vtkSmartPointer<vtkStructuredAMRGridConnectivity>::New();
		VtkStructuredAMRGridConnectivityWrap* obj = new VtkStructuredAMRGridConnectivityWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredAMRGridConnectivityWrap::ComputeNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNeighbors();
}

void VtkStructuredAMRGridConnectivityWrap::CreateGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CreateGhostLayers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::GetBalancedRefinement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBalancedRefinement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredAMRGridConnectivityWrap::GetCellCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellCentered();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredAMRGridConnectivityWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredAMRGridConnectivityWrap::GetGhostedExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGhostedExtent(
				info[0]->Int32Value(),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetGhostedExtent(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::GetNodeCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNodeCentered();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredAMRGridConnectivityWrap::GetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfNeighbors(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	vtkStructuredAMRGridConnectivity * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStructuredAMRGridConnectivityWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredAMRGridConnectivityWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredAMRGridConnectivityWrap *w = new VtkStructuredAMRGridConnectivityWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredAMRGridConnectivityWrap::RegisterGrid(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32Array())
				{
					v8::Local<v8::Int32Array>a3(v8::Local<v8::Int32Array>::Cast(info[3]->ToObject()));
					if( a3->Length() < 6 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkUnsignedCharArrayWrap *a5 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointDataWrap *a6 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[7]))
								{
									VtkCellDataWrap *a7 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[8]))
									{
										VtkPointsWrap *a8 = ObjectWrap::Unwrap<VtkPointsWrap>(info[8]->ToObject());
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->RegisterGrid(
											info[0]->Int32Value(),
											info[1]->Int32Value(),
											info[2]->Int32Value(),
											(int *)(a3->Buffer()->GetContents().Data()),
											(vtkUnsignedCharArray *) a4->native.GetPointer(),
											(vtkUnsignedCharArray *) a5->native.GetPointer(),
											(vtkPointData *) a6->native.GetPointer(),
											(vtkCellData *) a7->native.GetPointer(),
											(vtkPoints *) a8->native.GetPointer()
										);
										return;
									}
								}
							}
						}
					}
				}
				else if(info.Length() > 3 && info[3]->IsArray())
				{
					v8::Local<v8::Array>a3(v8::Local<v8::Array>::Cast(info[3]->ToObject()));
					int b3[6];
					if( a3->Length() < 6 )
					{
						Nan::ThrowError("Array too short.");
						return;
					}

					for( i = 0; i < 6; i++ )
					{
						if( !a3->Get(i)->IsInt32() )
						{
							Nan::ThrowError("Array contents invalid.");
							return;
						}
						b3[i] = a3->Get(i)->Int32Value();
					}
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkUnsignedCharArrayWrap *a5 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointDataWrap *a6 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[7]))
								{
									VtkCellDataWrap *a7 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[8]))
									{
										VtkPointsWrap *a8 = ObjectWrap::Unwrap<VtkPointsWrap>(info[8]->ToObject());
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->RegisterGrid(
											info[0]->Int32Value(),
											info[1]->Int32Value(),
											info[2]->Int32Value(),
											b3,
											(vtkUnsignedCharArray *) a4->native.GetPointer(),
											(vtkUnsignedCharArray *) a5->native.GetPointer(),
											(vtkPointData *) a6->native.GetPointer(),
											(vtkCellData *) a7->native.GetPointer(),
											(vtkPoints *) a8->native.GetPointer()
										);
										return;
									}
								}
							}
						}
					}
				}
			}
			else if(info.Length() > 2 && info[2]->IsInt32Array())
			{
				v8::Local<v8::Int32Array>a2(v8::Local<v8::Int32Array>::Cast(info[2]->ToObject()));
				if( a2->Length() < 6 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkUnsignedCharArrayWrap *a3 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[5]))
						{
							VtkPointDataWrap *a5 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkCellDataWrap *a6 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[7]))
								{
									VtkPointsWrap *a7 = ObjectWrap::Unwrap<VtkPointsWrap>(info[7]->ToObject());
									if(info.Length() != 8)
									{
										Nan::ThrowError("Too many parameters.");
										return;
									}
									native->RegisterGrid(
										info[0]->Int32Value(),
										info[1]->Int32Value(),
										(int *)(a2->Buffer()->GetContents().Data()),
										(vtkUnsignedCharArray *) a3->native.GetPointer(),
										(vtkUnsignedCharArray *) a4->native.GetPointer(),
										(vtkPointData *) a5->native.GetPointer(),
										(vtkCellData *) a6->native.GetPointer(),
										(vtkPoints *) a7->native.GetPointer()
									);
									return;
								}
							}
						}
					}
				}
			}
			else if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2(v8::Local<v8::Array>::Cast(info[2]->ToObject()));
				int b2[6];
				if( a2->Length() < 6 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 6; i++ )
				{
					if( !a2->Get(i)->IsInt32() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->Int32Value();
				}
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkUnsignedCharArrayWrap *a3 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkUnsignedCharArrayWrap *a4 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[5]))
						{
							VtkPointDataWrap *a5 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkCellDataWrap *a6 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[7]))
								{
									VtkPointsWrap *a7 = ObjectWrap::Unwrap<VtkPointsWrap>(info[7]->ToObject());
									if(info.Length() != 8)
									{
										Nan::ThrowError("Too many parameters.");
										return;
									}
									native->RegisterGrid(
										info[0]->Int32Value(),
										info[1]->Int32Value(),
										b2,
										(vtkUnsignedCharArray *) a3->native.GetPointer(),
										(vtkUnsignedCharArray *) a4->native.GetPointer(),
										(vtkPointData *) a5->native.GetPointer(),
										(vtkCellData *) a6->native.GetPointer(),
										(vtkPoints *) a7->native.GetPointer()
									);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredAMRGridConnectivity * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStructuredAMRGridConnectivityWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredAMRGridConnectivityWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredAMRGridConnectivityWrap *w = new VtkStructuredAMRGridConnectivityWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::SetBalancedRefinement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBalancedRefinement(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::SetCellCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellCentered(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::SetNodeCentered(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNodeCentered(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
